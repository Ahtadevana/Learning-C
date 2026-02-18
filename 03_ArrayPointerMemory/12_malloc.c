#include <stdio.h>
#include <stdlib.h>

int main()  {
    size_t allocSize = 0;

    printf("How many integers you want to allocate?: ");
    scanf("%d", &allocSize);

    int *pAllocSize = malloc(allocSize * sizeof(int));

    if(pAllocSize == NULL) {
        printf("Allocation failed. Quitting...");
        return 1;
    }

    for(int i=0; i < allocSize; i++) {
        printf("Enter integer number #%d: ", i + 1);
        scanf("%d", &pAllocSize[i]);
    }

    for(int i=0; i < allocSize; i++) {
        printf("%d ", pAllocSize[i]);
    }

    free(pAllocSize);
    pAllocSize = NULL;
    return 0;
}