#include <stdio.h>

int main()  {
    int x = 5;
    int *y = &x;
    int **z = &y;
    int ***p = &z;

    printf("Value of X: %d\n", x);
    printf("Address of X: %p\n", y);
    printf("Value of X through dereferencing y: %d\n---\n", *y);

    printf("Address of z: %p\n", z);
    printf("Address of y through z pointer: %p\n", *z);
    printf("Value of x through dereferencing z: %d\n---\n", *(*z));

    printf("Address of p: %p\n", p);
    printf("Address of z through p pointer: %p\n", *p);
    printf("Address of y through p pointer: %p\n", *(*p));
    printf("Value of x through dereferencing p: %d\n", *(*(*p)));

    return 0;
}