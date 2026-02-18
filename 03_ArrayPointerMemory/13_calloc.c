#include <stdio.h>
#include <stdlib.h>

int main()  {
    size_t n = 5;

    int *pMemAlloc = calloc(n, sizeof(int));

    if(pMemAlloc == NULL) {
        printf("Allocation failed");
        return 1;
    }

    for(int i=0; i < n; i++) {
        printf("%d ", pMemAlloc[i]);
    }

    free(pMemAlloc);
    pMemAlloc = NULL;

    return 0;
}