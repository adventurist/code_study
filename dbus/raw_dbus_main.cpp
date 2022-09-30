#include <sys/socket.h>
#include <sys/un.h>
#include <future>
#include <iostream>
#include <unistd.h>
#include <thread>

#include <dbus/dbus.h>

#include <cstddef>
#include <cstdio>
#include <iostream>

int main (int argc, char * argv[])
{
    (void)argc;
    (void)argv;
    DBusError dbus_error;
    DBusConnection * dbus_conn = nullptr;
    DBusMessage * dbus_msg = nullptr;
    DBusMessage * dbus_reply = nullptr;
    const char * dbus_result = nullptr;

    // Initialize D-Bus error
    ::dbus_error_init(&dbus_error);

    // Connect to D-Bus
    if ( nullptr == (dbus_conn = ::dbus_bus_get(DBUS_BUS_SYSTEM, &dbus_error)) ) {
        ::perror(dbus_error.name);
        ::perror(dbus_error.message);

    // Compose remote procedure call  > annotate-output dbus-monitor --system "type='signal',interface='org.freedesktop.UPower'"
    } else if ( nullptr == (dbus_msg = ::dbus_message_new_method_call("org.freedesktop.DBus", "/", "org.freedesktop.DBus.Introspectable", "Introspect")) ) {
        ::dbus_connection_unref(dbus_conn);
        ::perror("ERROR: ::dbus_message_new_method_call - Unable to allocate memory for the message!");

    // Invoke remote procedure call, block for response
    } else if ( nullptr == (dbus_reply = ::dbus_connection_send_with_reply_and_block(dbus_conn, dbus_msg, DBUS_TIMEOUT_USE_DEFAULT, &dbus_error)) ) {
        ::dbus_message_unref(dbus_msg);
        ::dbus_connection_unref(dbus_conn);
        ::perror(dbus_error.name);
        ::perror(dbus_error.message);

    // Parse response
    } else if ( !::dbus_message_get_args(dbus_reply, &dbus_error, DBUS_TYPE_STRING, &dbus_result, DBUS_TYPE_INVALID) ) {
        ::dbus_message_unref(dbus_msg);
        ::dbus_message_unref(dbus_reply);
        ::dbus_connection_unref(dbus_conn);
        ::perror(dbus_error.name);
        ::perror(dbus_error.message);

    // Work with the results of the remote procedure call
    } else {
        std::cout << "Connected to D-Bus as \"" << ::dbus_bus_get_unique_name(dbus_conn) << "\"." << std::endl;
        std::cout << "Introspection Result:" << std::endl;
        std::cout << std::endl << dbus_result << std::endl << std::endl;
        ::dbus_message_unref(dbus_msg);
        ::dbus_message_unref(dbus_reply);

        /*
         * Applications must not close shared connections -
         * see dbus_connection_close() docs. This is a bug in the application.
         */
        //::dbus_connection_close(dbus_conn);

        // When using the System Bus, unreference
        // the connection instead of closing it
        ::dbus_connection_unref(dbus_conn);
    }

    return 0;
}

/* int acpid_sock; */
/* sockaddr_un acpid_addr; */
/* std::future<void> acpid_sock_future; */
/* class sleep_event_listener { */
/* public: */
/*   void init() */
/* { */
/*   std::cout << "Init Sleep Event Listener" << std::endl; */
/*   acpid_sock = socket(AF_UNIX, SOCK_STREAM, 0); */
/*   if (acpid_sock >= 0) */
/*   { */
/*     acpid_addr.sun_family = AF_UNIX; */
/*     strcpy(acpid_addr.sun_path,"/var/run/acpid.socket"); */
/*     if (connect(acpid_sock, (struct sockaddr *)&acpid_addr, 108) < 0 ) */
/*     { */
/*       close(acpid_sock); */
/*       acpid_sock = -1; */
/*       std::cerr << "Failed to connect to ACPID socket!" << std::endl; */
/*     } */
/*   } */
/*   std::cout << "ACPID socket register complete" << std::endl; */


/*   acpid_sock_future = std::async(std::launch::async, [this]() { return poll(); }); */
/* } */

/* void poll() */
/* { */
/*   std::cout << "ACPID poll with acpid socket" << std::endl; */

/*   while (true) */
/*   { */
/*     char buf[1024]; */
/*     if (int  s = recv(acpid_sock, buf, sizeof(buf), MSG_DONTWAIT)) */
/*     { */
/*       if (s < 1) continue; */
/*       std::string acpid_message{buf, buf + s}; */
/*       std::cout << "Received ACPID message: " << acpid_message << std::endl; */
/*       if (acpid_message.find("battery PNP0C0A:00 00000000 00000001") != std::string::npos) while(true) ; */
/*     } */
/*     std::this_thread::sleep_for(std::chrono::milliseconds(300)); */
/*   } */
/*   std::cout <<"No longer reading ACPID socket" << std::endl; */
/* } */
/* }; */

/* int main(int argc, char* argv[]) */
/* { */
/*   sleep_event_listener listener{}; */
/*   listener.init(); */

/*   while (true); */
/*   return 0; */
/* } */
