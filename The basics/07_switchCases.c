#include <stdio.h>
#include <stdbool.h>

int main()  {
    int isRaining = 1;  //act as a bool because my compiler somehow doesnt take boolean seriously
    int dayOfWeek = 120912;

    switch(dayOfWeek) {
        case 1:
            printf("Today is Monday\n");
            break;
        case 2:
            printf("Today is Tuesday\n");
            break;
        case 3:
            printf("Today is Wednesday\n");
            break;
        case 4:
            printf("Today is Thursday\n");
            break;
        case 5:
            printf("Today is Friday\n");
            break;
        case 6:
            printf("Today is Saturday\n");
            break;
        case 7:
            printf("Today is Sunday\n");
            break;
        default:
            printf("Regardless, is a beautiful day!\n");    
            //default doesnt require break; cuz it's in the last order
    } switch(isRaining) {
        case 1:
            printf("It's raining today, too!");
            break;
        case 0:
            printf("It's sunny today, too!");
            break;
        default:
            printf("It's the apocalypse. The sky emits bright red light"); 
    }
    return 0;
}