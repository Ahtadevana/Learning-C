#include <stdio.h>
#include <ctype.h>  //tolower() and toupper() statement

int main() {
    char choice = '\0';
    float weight = 0.0f;
    float convertedWeight = 0.0f;
    double converter = 2.20462;

    printf("---Welcome to the weight converter program!---\n");

    printf("What's your weight?: ");
    scanf("%f", &weight);

    printf("---\nInsert 'L' for Lbs -> Kgs\n");
    printf("Insert 'K' for Kgs -> Lbs\n---\n");
    
    printf("Choose: ");
    scanf(" %c", &choice);
    choice = toupper(choice);   //ctype.h in action!

    if(choice == 'L') {
        convertedWeight = weight / converter;
    } else if(choice == 'K') {
        convertedWeight = weight * converter;
    } else {
        printf("Choices are either 'L' or 'K' to proceed!");
        return 1;
    }

    printf("The converted weight is: %.2f", convertedWeight);

    return 0;
}