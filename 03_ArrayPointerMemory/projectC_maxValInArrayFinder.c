#include <stdio.h>

void findMaxValue(int *arr, int arrSize, int *value);

int main()  {
    int arr[5] = {2, 1028, 8, 128, 32};
    size_t arrSize = sizeof(arr) / sizeof(arr[0]);
    int maxValue = arr[0];
    int *pMaxValue = &maxValue;

    findMaxValue(arr, arrSize, pMaxValue);
    printf("%d", maxValue);
    return 0;
}

void findMaxValue(int *arr, int arrSize, int *value) {
    for(int i = 0; i < arrSize; i++) {
        if((*value) < arr[i])
            (*value) = arr[i];
    }
}