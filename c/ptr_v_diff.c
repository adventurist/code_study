#include <stdio.h>

void update(int *a,int *b) {
    int a_val = *a;
    a = (*(a) + *(b));
    b = (a_val > *(b)) ?
          (a_val - *(b)):
          (*(b) - a_val);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}