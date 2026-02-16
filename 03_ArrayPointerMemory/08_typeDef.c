#include <stdio.h>

int birthdayAge(int *age);

int main() {
    typedef int number;
    number age = 1921;
    number *pAge = &age;

    printf("Address of age: %p\n", pAge);
    printf("Age before birthday: %d\n", age);

    birthdayAge(pAge);  //increment age++
    printf("Age after birthday: %d\n", *pAge);
    return 0;
}

int birthdayAge(int *age) {
    return (*age)++;
}