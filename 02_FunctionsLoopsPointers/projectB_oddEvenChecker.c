#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int isEven(int num);

int main()  {
    int userNum = 0;
    bool isRunning = true;
    bool checked = true;
    char choice = '\0';

    do {
        printf("Insert a number: ");
        scanf("%d", &userNum);
        checked = isEven(userNum);

        printf("\nWould you like to quit? ('q' to quit): ");
        scanf(" %c", &choice);

        if(choice == 'q') {
            isRunning = false;
        }
    } while(isRunning);
    return 0;
}

int isEven(int num) {
    if(num % 2 == 0) {
        printf("Even!");
    } else {
        printf("Odd!");
        return false;
    }
}