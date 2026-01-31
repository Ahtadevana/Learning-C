#include <stdio.h>

int main()  {
    double pi = 3.1415926535897932;
    double e = 2.71828;
    int x = 1;
    int y = 10;
    int z = -100;

    printf("pi: %.5lf\neuler: %.5lf\n", pi, e);
    printf("%5d\n", x);
    printf("%05d\n", y);    //fill out any remaining spaces with 0s
    printf("%+5d\n", z);    //shows the terminal whether the value is positive or negative
    return 0;
}