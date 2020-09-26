#include <boost/asio/detail/impl/kqueue_reactor.ipp>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void diep(const char *s)
{
    perror(s);
    exit(EXIT_FAILURE);
}

long get_time_ms() {
    struct timeval time;
    gettimeofday(&time, NULL);
    long millis = (time.tv_sec * 1000) + (time.tv_usec / 1000);
    return millis;
}

int main(int argc, char **argv) {
    struct kevent change;
    struct kevent event;
    struct timespec timeout;

    int kq, nev;
    pid_t  pid;

    if (argc != 2)
        return -1;

    int msec = atoi(argv[1]);
    timeout.tv_sec = msec / 1000;
    timeout.tv_nsec = (msec % 1000) * 1000000;

    if ((kq = kqueue()) == -1)
        diep("kqueue");

    if ((pid = fork()) < 0)
        diep("fork error");

    if (pid == 0) {
        usleep(7000); // sleep for 7 ms
        if (execlp("date", "date", (char *)0) < 0)
            diep("execlp date error");
    }
    else {
        long start_time = get_time_ms();
        // try with NOTE_EXIT, NOTE_TRACK, NOTE_EXEC, etc.
        EV_SET(&change, pid, EVFILT_PROC, EV_ADD, NOTE_EXIT, 0,0);
        nev = kevent(kq, &change, 1, &event, 1, &timeout);
        long end_time = get_time_ms();
        if (nev < 0) {
            diep("nev error");
        }
        if (nev == 0) {
            diep("no event");
        }
        if (nev > 0) {
            printf("nev = %d, time = %ld milliseconds\n", nev, end_time - start_time);
            return 0;
        }
    }
    close(kq);
    return EXIT_SUCCESS;
}
