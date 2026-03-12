#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node* createNode(int data);
void insertAtHead(Node **head, int data);
void insertAtTail(Node **head, int data);
void searchNode(Node *head, int data);
void printNode(Node *head);

int main() {
    Node *head = createNode(10);
    insertAtHead(&head, 20);
    insertAtHead(&head, 40);
    printNode(head);

    searchNode(head, 10);
    return 0;
}

Node* createNode(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Allocation Failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtHead(Node **head, int data){
    Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtTail(Node **head, int data){
    Node *newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
    } else {
        Node *temp = *head;
        if(!temp){
            printf("Allocation Failed\n");
        }
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void searchNode(Node *head, int data){
    bool found = false;
    int count = 0;
    for(Node *current = head; current != NULL; current = current->next){
        count++;
        if(current->data == data){
            found = true;
            break;
        }
    }
    if(found){
        printf("Found at #%d Node!", count);
    } else {
        printf("Not Found!");
    }
}

void printNode(Node *head){
    Node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    } 
    printf("NULL\n");
}