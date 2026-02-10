#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age) {
    //if above 18 == true
    return age >= 18;
}

int main()  {
    int userAge = ageCheck(67);

    if(userAge) {
        printf("You are allowed to enter!");
    } else {
        printf("No entry for you!");
    }

    return 0;
}