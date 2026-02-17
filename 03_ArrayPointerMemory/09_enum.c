#include <stdio.h>

typedef enum {
    STATUS_ONLINE,
    STATUS_IDLE,
    STATUS_OFFLINE
} Status;

int main()  {
    Status user = STATUS_IDLE;
    
    switch(user) {
        case STATUS_ONLINE:
            printf("User is ONLINE!");
            break;
        case STATUS_IDLE:
            printf("User is IDLE");
            break;
        case STATUS_OFFLINE:
            printf("User is OFFLINE");
            break;
        default:
            printf("UNKNOWN BEHAVIOR");
    }
    return 0; 
}