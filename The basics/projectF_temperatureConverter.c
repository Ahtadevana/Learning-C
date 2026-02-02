#include <stdio.h>
#include <ctype.h>

int main()  {
    char choice = '\0';
    float temp = 0.0f;
    double result = 0.0;

    printf("---Welcome to the temperature converter program!---\n");
    printf("Insert temperature: ");
    scanf("%f", &temp);
    
    printf("---options---\n");
    printf("'C' to convert Celsius to Fahrenheit\n");
    printf("'F' to convert Fahrenheit to Celsius\n");
    printf("Your choice: ");
    scanf(" %c", &choice);
    choice = toupper(choice);   //ctype.h thing doing its thing

    if(choice == 'C') {
        result = (temp * 9.0 / 5.0) + 32;
    } else if(choice == 'F') {
        result = (temp - 32) * 5.0 / 9.0;
    }
    printf("The converted temperature is: %.2lf", result);

    return 0;
}