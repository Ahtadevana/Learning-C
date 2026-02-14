#include <stdio.h>
#include <stdbool.h>

int main()  {
    bool isAdult = false;
    printf("%s", (isAdult)? "true\n":"false\n");    //ternary operator

    int age = 18;
    printf("%s", (age >= 18)? "Pass!\n":"Denied!\n");

    return 0;
}