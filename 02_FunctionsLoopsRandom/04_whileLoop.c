#include <stdio.h>
#include <string.h>

int main()  {
    int userAge = 0;
    int i = 0;
    int repeat = 5;

    do {
        printf("Enter your age: ");
        scanf("%d", &userAge);
    } while(userAge < 1);

    printf("---\n");
    while(i < repeat) {
        printf("Hello, %d times!\n", repeat);
        i++;
    }

    return 0;
}