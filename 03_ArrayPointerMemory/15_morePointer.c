#include <stdio.h>

void seeAddress(int *address);
void seePointerAddress(int **pointerAddress);
int dereference(int *address);
int dereferencePToP(int **address);

int main(){
    int myNum = 10;
    int *pMyNum = &myNum;
    int **pPMyNum = &pMyNum;

    seeAddress(pMyNum);
    seePointerAddress(pPMyNum);

    printf("MyNum Value: %d\n", dereference(pMyNum));
    printf("MyNum Value: %d\n", dereferencePToP(pPMyNum));
    return 0;
}

void seeAddress(int *address){
    printf("The Value's Address is: %p\n", address);
}

void seePointerAddress(int **pointerAddress){
    printf("The Pointer's Address is: %p\n", pointerAddress);
}

int dereference(int *address){
    return *address;
}

int dereferencePToP(int **address){
    return *(*address);
}