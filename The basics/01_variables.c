#include <stdio.h>
#include <stdbool.h>

int main()  {
    int age = 18;
    float gpa = 3.47;
    double pi = 3.14259;
    char grade = 'A';   //within single quotes and can contain symbols (e.g. @, $, etc.)
    char name[50] = "Xervii";
    bool is_online = false;
    
    /* 
    string is limited to only 50 characters or 
    however many value is within an array
    */

    printf("Your age: %d", age);
    printf("\nYour gpa: %.2f", gpa);
    printf("\nValue of pi: %.2lf", pi);
    printf("\nYour grade: %c", grade);
    printf("\nYour name: %s", name);
    printf("\nOnline status: %d", is_online);

    return 0;
}