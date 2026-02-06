#include <stdio.h>

int main()  {
    char choice = '\0';
    float x = 0.0f;
    float y = 0.0f;
    double result = 0.0;

    printf("---Welcome to the calculator program!---\n");
    printf("Insert the first number: ");
    scanf("%f", &x);
    printf("Insert the second number: ");
    scanf("%f", &y);
    
    printf("1. '+' to add\n");
    printf("2. '-' to subtract\n");
    printf("3. '*' to multiply\n");
    printf("4. '/' to divide\n");
    printf("Your choice: ");
    scanf(" %c", &choice);

    if(choice == '+') {
        result = x + y;
    } else if(choice == '-') {
        result = x - y;
    } else if(choice == '*') {
        result = x * y;
    } else if(choice == '/') {
        if(y == 0) {    // 0 / y is still possible (y != 0)
            printf("Must not divide by zero!");
            return 1;
        } else {
            result = x / y;
        }
    } else {
        printf("Operators invalid! Insert only these four:\n");
        printf("1. '+'\n2. '-'\n3. '*'\n4. '/'\n");
        return 1;   //force exit because of a print error
    }
    printf("The total is: %.2lf", result);
    return 0;
}