#include <stdio.h>
#include <string.h>

int main()  {
    char names[][10] = {"Bro", "Chad", "Felix"};
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", names[i][j]);
        }
        printf("\n");
    } printf("---\n");

    // User input
    char fruits[3][15] = {0};
    for(int k = 0; k < 3; k++) {
        printf("Enter a fruit: ");
        fgets(fruits[k], sizeof(fruits[k]), stdin);
        fruits[k][strcspn(fruits[k], "\n")] = '\0';
    } printf("---\n");

    for(int l = 0; l < 3; l++) {
        for(int m = 0; m < 15; m++) {
            printf("%c", fruits[l][m]);
        }
        printf("\n");
    }
    return 0;
}