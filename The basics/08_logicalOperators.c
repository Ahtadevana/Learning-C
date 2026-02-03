#include <stdio.h>
#include <stdbool.h>

int main()  {
    int temp = 4;
    bool isRaining = true;

    if(temp <= 40 && temp >= 10) {
        if(isRaining) {
            printf("A calming rain, in a perfect weather.");
        } else {
            printf("Just the perfect weather.");
        }
    } else if(temp > 40 || temp < 10) {
        if(isRaining) {
            printf("I hate it all. I hate this weather.");
        } else {
            printf("Weather is terrible!");
        }
    } else {
        printf("Something's up with the weather.");
    } 
    return 0;
}