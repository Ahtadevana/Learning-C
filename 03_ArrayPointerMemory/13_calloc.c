#include <stdio.h>
#include <stdlib.h>

void copyArr(int *arrA, int *arrB);

int main(){
    size_t arrSize = 5;
    int *arr = calloc(arrSize, sizeof(int));
    int *fooArr = calloc(arrSize, sizeof(int));

    for(int i=0; i<arrSize; i++){
        arr[i] = i+1;
    }

    copyArr(arr, fooArr);

    for(int i=0; i<arrSize; i++){
        printf("%d ", fooArr[i]);
    }
    return 0;
}

void copyArr(int *arrA, int *arrB){
    for(int i=0; i<5; i++){
        *(arrB + i) = *(arrA + i);
    }
}