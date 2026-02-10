#include <stdio.h>

int main()  {
    int scores[5] = {0};
    char grades[5] = {'\0'};

    for(int i = 0; i < sizeof(scores) / sizeof(scores[0]); i++) {
        printf("Insert a score: ");
        scanf("%d", &scores[i]);
    } for(int j = 0; j < sizeof(scores) / sizeof(scores[0]); j++) {
        printf("%d ", scores[j]);
    } printf("\n---\n");
    for(int k = 0; k < sizeof(grades); k++) {
        printf("Inset a grade: ");
        scanf(" %c", &grades[k]);
    } for(int l = 0; l < sizeof(grades); l++) {
        printf("%c ", grades[l]);
    } printf("\n\n");
    return 0;
}