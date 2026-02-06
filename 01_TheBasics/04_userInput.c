#include <stdio.h>
#include <string.h>

int main()  {
    char name[30] = "";
    int age = 0;
    char grade = '\0';  //a null terminator
    float gpa = 0.0f;

    printf("Input your name: ");    //no getchar() at the start!
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Input your age: ");
    scanf("%d", &age);

    printf("Input your grade: ");
    scanf(" %c", &grade);

    printf("Input your gpa: ");
    scanf("%f", &gpa);

    printf("---\nYour name: %s\n", name);
    printf("Your age: %d\n", age);
    printf("Your grade: %c\n", grade);
    printf("Your gpa: %.2f\n", gpa);
    return 0;
}