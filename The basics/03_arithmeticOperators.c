#include <stdio.h>

int main()  {
    float x = 10;
    float y = 3;
    float z = 0;

    int numberOfStudents = 10;
    int groupsOf = 3;
    int result = 0;

    z = x + y;
    z -= y;
    z *= x;
    z /= y;

    result = numberOfStudents % groupsOf;
    z++;
    y++;

    printf("%.2f\n", z);
    printf("%d\n", result);

    return 0;
}