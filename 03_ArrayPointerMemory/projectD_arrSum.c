#include <stdio.h>

void getSum(int *arr, int arrSize, int *sumResult);

int main()  {

    int arr[5] = {2, 4, 8, 16, 32};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]);
    int arrSum = 0;
    int *pArrSum = &arrSum;

    getSum(arr, arrSize, pArrSum);

    printf("Sum: %d\n", arrSum);
    return 0;
}

void getSum(int *arr, int arrSize, int *sumResult) {
    for(int i=0; i< arrSize; i++) {
        *sumResult += arr[i];
    }
}