#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()  {
    bool isRunning = true;
    char character = '\0';
    char previousChar = '\0';

    do {
        printf("Enter a single character: ");
        scanf(" %c", &character);

        if(character == previousChar) {
            printf("The repeated character is: %c\n", character);
        } else if(character == 'q') {
            break;
        }
        previousChar = character;
    } while(isRunning);

    return 0;
}