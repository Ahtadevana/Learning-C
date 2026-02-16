#include <stdio.h>

int main()  {
    int x = 5;
    int y = 10;
    int *pX = &x;
    int *pY = &y;

    pY--;

    printf("%p\n", pX);
    printf("%p\n", pY);
    return 0;
}