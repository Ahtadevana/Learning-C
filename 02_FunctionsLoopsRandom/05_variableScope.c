#include <stdio.h>

/*
Despite having the same variables,
They are inside different scopes,
Variables CANNOT share the same name
inside the same function
*/

int square(int num);
int cube(int num);

int main()  {
    int num = 5;
    int result = cube(num);

    printf("%d\n", result);
    return 0;
}

int square(int num) {
    int result;
    result = num * num;
    return result;
}

int cube(int num) {
    int result;
    result = num * num * num;
    return result;
}