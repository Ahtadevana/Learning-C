#include <stdio.h>

int main()  {
    int i = 0;
    while(i < 10) {
        i++;
        if(i == 4) {
            continue;   //skips an iteration
        } else if(i == 9) {
            break;
        }
        printf("%d", i);
    }
    return 0;
}