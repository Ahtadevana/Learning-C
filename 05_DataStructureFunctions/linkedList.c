#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *headInit();

int main() {
    Node *head = headInit();
    return 0;
}

Node* headInit(){
    Node *head = (Node*)malloc(sizeof(Node));
    if(!head){
        printf("Allocation Failed!");
        exit(1);
    }
    return head;
}