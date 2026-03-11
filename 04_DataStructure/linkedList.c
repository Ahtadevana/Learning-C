#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));

    if(!head || !second || !third){
        printf("Something Went Wrong");
        exit(1);
    }

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    Node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    } printf("NULL");

    temp = head;
    while(temp != NULL) {
        Node *next = temp->next;
        free(temp);
        temp = next;
    }
    return 0;
}