#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int classSize = 3;
    int scores[3] = {0};
    int userChoice = 0;
    int addNameTurns = 0;
    char names[3][100] = {"Blank", "Blank", "Blank"};
    size_t arrSize = sizeof(names) / sizeof(names[0]);
    bool isRunning = true;

    printf("===Welcome to the Students' Grade Database===\n");
    printf("(type the corresponding numbers)");
    do {
        printf("Options:\n");
        printf("1. Check array size\n2. Check current contents\n");
        printf("3. Add/change data\n4. Sort datas\n");
        printf("(0 to quit): ");
        scanf("%d", &userChoice);

        if(userChoice == 0) {
            isRunning = false;
        }
        switch(userChoice) {
            case 1:
                printf("-----\nSize of array: %d\n-----\n", arrSize);
                break;
            case 2:
                printf("-----\n");
                for(int i = 0; i < arrSize; i++) {
                    printf("%s : %d\n", names[i], scores[i]);
                } printf("-----\n");
                break;
            case 3:
                getchar();
                for(int i = 0; i < classSize; i++) {
                    printf("Insert student's name: ");
                    fgets(names[i], sizeof(names[0]), stdin);
                    names[i][strcspn(names[i], "\n")] = '\0';

                    printf("Insert %s's score: ", names[i]);
                    scanf("%d", &scores[i]);
                    getchar();  //remove that annoyin ahh newline!
                }
                printf("-----\n");
                break;
        }
    } while(isRunning);
    printf("-----\nProgram is exited\n-----");
    return 0;
}