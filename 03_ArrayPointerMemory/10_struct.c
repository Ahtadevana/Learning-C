#include <stdio.h>

typedef struct{
    char name[50];
    int age;
} Student;

int main()  {
    Student student1 = {"Xervii", 18};
    Student student2 = {"Felix", 21};

    printf("Name: %s\nAge: %d\n---\n", student1.name, student1.age);
    printf("Name: %s\nAge: %d", student2.name, student2.age);
    return 0;
}