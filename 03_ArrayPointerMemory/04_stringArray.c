#include <stdio.h>

int main()  {
    char names[][10] = {"Tom", "Dahl", "Joe"};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%c", names[i][j]);
        }
        printf("\n");
    }
    return 0;
}