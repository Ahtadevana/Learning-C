#include <stdio.h>

typedef struct {
    char model[50];
    int horsepower;
    int price;
} Car;

int main() {
    Car cars[3] = {{"Toyota Supra", 382, 45000},
                   {"Honda Civic", 158, 23000},
                   {"Ford Mustang GT", 450, 43000}};
    size_t arrSize = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < arrSize; i++) {
        printf("---\nModel: %s\n", cars[i].model);
        printf("Horsepower: %d\n", cars[i].horsepower);
        printf("Price: %d\n", cars[i].price);
    } printf("---");

    return 0;
}