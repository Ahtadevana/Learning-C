#include <stdio.h>

void ageGroupCheck(int age);    //func prototype

int main()  {
    int userAge = 0;

    printf("Enter your age: ");
    scanf("%d", &userAge);
    ageGroupCheck(userAge);

    return 0;
}

void ageGroupCheck(int age) {
    if(age >= 65) {
        printf("You are a senior");
    } else if(age >= 18) {
        printf("You are an adult!");
    } else if(age >= 1) {
        printf("you are a minor");
    } else {
        printf("You haven't been borned yet");
    }
}