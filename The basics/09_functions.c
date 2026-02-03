#include <stdio.h>
#include <string.h>

void birthdaySong(char birthdayPerson[], int age) {
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear, %s!\n", birthdayPerson);
    printf("Happy birthday to you!\n");
    printf("Congrats! You are now %d", age);
}

int main()  {
    char name[50] = "";
    int age = 0;

    printf("Insert your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Insert your age: ");
    scanf("%d", &age);

    birthdaySong(name, age);
    return 0;
}