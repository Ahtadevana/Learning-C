#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
} Node;

int main() {
    //TopInit
    Node *top = (Node*)malloc(sizeof(Node));
    top->data = 10;
    top->next = NULL;

    //Push
    Node *secondNode = (Node*)malloc(sizeof(Node));
    secondNode->data = 20;
    secondNode->next = top;

    //Push
    Node *thirdNode = (Node*)malloc(sizeof(Node));
    thirdNode->data = 30;
    thirdNode->next = secondNode;

    //Pop
    free(thirdNode);

    //Peek
    printf("%d\n", secondNode->data);

    //IsEmpty
    if(top == NULL){
        printf("Is Empty!\n");
    } else {
        printf("Is NOT Empty!\n");
    }

    //FreeStack
    Node *current = top;
    while(current != NULL){
        Node *temp = current;
        free(temp);
        current = current->next;
    }
    top = NULL;
    return 0;
}