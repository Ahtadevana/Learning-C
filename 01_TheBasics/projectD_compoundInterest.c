#include <stdio.h>
#include <string.h>
#include <math.h>

int main()  {
    char currency[10] = "";
    float principal = 0.0f;
    float interestRate = 0.0f;
    float timesCompounded = 0.0f;
    float years = 0.0f;
    
    double finalAmount = 0.0;

    printf("What's your currency?: ");
    fgets(currency, sizeof(currency), stdin);
    currency[strcspn(currency, "\n")] = '\0';

    printf("What's your starting money?: ");
    scanf("%f", &principal);

    printf("What's the interest rate (in percentage)?: ");
    scanf("%f", &interestRate);

    interestRate /= 100;
    printf("How many times the interest is compounded (in yrs)?: ");
    scanf("%f", &timesCompounded);

    printf("How many year(s) the money stored?: ");
    scanf("%f", &years);

    finalAmount = principal * (pow((1 + interestRate / timesCompounded), (timesCompounded * years)));
    printf("The result is: %s%.2lf", currency, finalAmount);
    return 0;
}