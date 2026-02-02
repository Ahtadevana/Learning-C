#include <stdio.h>
#include <stdbool.h>

int main()  {
    int age = 18;
    bool isStudent = true;

    if(age >= 65) {
        if(isStudent) {
            printf("30 percent discount!");
        } else {
            printf("20 percent discount!");
        }
    } else if(age >= 18) {
        if (isStudent) {
            printf("20 percent discount!");
        } else {
            printf("10 percent discount!");
        }
    } else {
        printf("No discount!");
    }
    
    return 0;
}