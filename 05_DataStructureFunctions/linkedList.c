#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node* createNode(int data);
void insertAtHead(Node **head, int data);
void insertAfterValue(Node *head, int key, int data);
void insertAtTail(Node **head, int data);

void zeroList(Node **head);
void deleteNode(Node **head, int key);

void listLen(Node *head);
void searchNode(Node *head, int key);
void printList(Node *head);

int main() {
    Node *head = createNode(20);
    printList(head);

    insertAtHead(&head, 10);
    insertAtHead(&head, 0);
    printList(head);
    listLen(head);

    insertAtTail(&head, 30);
    insertAtTail(&head, 40);
    printList(head);

    insertAfterValue(head, 20, 25);
    insertAfterValue(head, 30, 35);
    printList(head);

    searchNode(head, 20);
    insertAtTail(&head, 50);
    deleteNode(&head, 30);
    printList(head);

    listLen(head);

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

void insertAfterValue(Node *head, int key, int data){
    Node *newNode = createNode(data);
    Node *temp = head;

    while(temp != NULL){
        if(temp->data == key){
            newNode->next = temp->next;
            temp->next = newNode;
            printf("Data found! Allocated after %d\n", key);
            return;
        }
        temp = temp->next;
    }
    printf("Data %d NOT found! Allocation failed!\n", key);
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

void zeroList(Node **head){
    for(Node *current = *head; current != NULL; current = current->next){
        current->data = 0;
    }
    printf("All datas are ZERO-ed!\n");
}

void listLen(Node *head){
    int count;
    for(Node *current = head; current != NULL; current = current->next){
        count++;
    }
    printf("List length: %d\n", count);
}

void searchNode(Node *head, int key){
    bool found = false;
    int count = 0;
    for(Node *current = head; current != NULL; current = current->next){
        count++;
        if(current->data == key){
            found = true;
            break;
        }
    }
    if(found){
        printf("Found at #%d Node from head!\n", count);
    } else {
        printf("%d Not Found!\n", key);
    }
}

void printList(Node *head){
    Node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    } 
    printf("NULL\n");
}