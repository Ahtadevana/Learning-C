#include <stdio.h>

int main()  {
    int columns;
    int rows;
    char box[5] = "[]";

    printf("Insert how many columns: ");
    scanf("%d", &columns);
    columns--;

    printf("Insert how many rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%s", box);
        }
        printf("%s\n", box);
    }
    return 0;
}