#include <stdio.h>

int main()  {
    int age = 18;
    float gpa = 3.47;
    double pi = 3.14259;
    char grade = 'A';
    char name[50] = "Xervii";
    
    /* 
    string is limited to only 50 characters or 
    however many value is within an array
    */

    printf("Your age: %d", age);
    printf("\nYour gpa: %.2f", gpa);
    printf("\nValue of pi: %.2lf", pi);
    printf("\nYour grade: %c", grade);
    printf("\nYour name: %s", name);

    return 0;
}