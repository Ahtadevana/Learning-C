#include <stdio.h>
#include <string.h>

int main()  {
    char item[30] = "";
    char currency[10] = "";
    int quantity = 0;
    float price = 0.0f;
    float result = 0.0f;

    printf("What do you want to have?: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0';

    printf("What currency?: ");
    fgets(currency, sizeof(currency), stdin);
    currency[strcspn(currency, "\n")] = '\0';

    printf("How much would you buy?: ");
    scanf("%d", &quantity);

    printf("What is the price?: ");
    scanf("%f", &price);

    result = quantity * price;
    printf("You bought %d %s(s) for %s%.0f", quantity, item, currency, result);
    return 0;
}