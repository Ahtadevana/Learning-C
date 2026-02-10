#include <stdio.h>
/*
NOTES! Sizes of data type varies! Here are their size in bytes:
char = 1 byte
signed char = 1 byte
unsigned char = 1 byte
short = 2 bytes
short int = 2 bytes
unsigned short = 2 bytes
int = 4 bytes
unsigned int = 4 bytes
long = 8 bytes
unsigned long = 8 bytes
long long = 8 bytes
unsigned long long = 8 bytes
*/

int main()  {
    int numbers[] = {10, 20, 30, 40};
    char grades[] = {'A', 'B', 'C'};

    for(int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {    
        printf("%d ", numbers[i]);
    } printf("\n");
    for(int j=0; j < sizeof(grades); j++) {
        printf("%c ", grades[j]);
    } 
    return 0;
}