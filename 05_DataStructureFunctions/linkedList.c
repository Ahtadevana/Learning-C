#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

//Insertion
Node* createNode(int data);
void insertAtHead(Node **head, int data);
void insertAfterValue(Node *head, int key, int data);
void insertAtTail(Node **head, int data);
void setAllListValue(Node **head, int data);
void replaceNodeValue(Node **head, int key, int data);

//Deletion
void setListZero(Node **head);
void setNodeZero(Node **head, int key);
void deleteHead(Node **head);
void deleteNode(Node **head, int key);
void deleteTail(Node **head);
void freeList(Node **head);

//Display
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
    
    deleteHead(&head);
    printList(head);

    deleteHead(&head);
    printList(head);

    deleteTail(&head);
    printList(head);

    deleteNode(&head, 30);
    printList(head);

    deleteNode(&head, 40);
    printList(head);
    listLen(head);

    setNodeZero(&head, 25);
    printList(head);

    setListZero(&head);
    printList(head);

    replaceNodeValue(&head, 0, 10);
    replaceNodeValue(&head, 0, 15);
    replaceNodeValue(&head, 0, 20);
    replaceNodeValue(&head, 1738, 20);
    printList(head);

    freeList(&head);
    printList(head);
    listLen(head);
    return 0;
}

//==========================================INSERTION==========================================
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
    Node *current = head;
    
    while(current != NULL){
        if(current->data == key){
            Node *newNode = createNode(data);
            newNode->next = current->next;
            current->next = newNode;
            printf("Data found! Allocated after %d\n", key);
            return;
        }
        current = current->next;
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

void setAllListValue(Node **head, int data){
    Node *current = *head;
    while(current != NULL){
        current->data = data;
        current = current->next;
    }
}

void replaceNodeValue(Node **head, int key, int data){
    Node *current = *head;
    while(current != NULL){
        if(current->data == key){
            current->data = data;
            return; //prevents changing duplicated values
        }
        current = current->next;
    }
    printf("Data %d NOT found! Altering failed!\n", key);
}

//==========================================DELETION==========================================
void setListZero(Node **head){
    if(*head == NULL){
        printf("List is EMPTY!\n");
        return;
    }
    for(Node *current = *head; current != NULL; current = current->next){
        current->data = 0;
    }
    printf("All datas are ZERO-ed!\n");
}

void setNodeZero(Node **head, int key){
    if(*head == NULL){
        printf("List is EMPTY!\n");
        return;
    }

    Node *current = *head;
    while(current != NULL){
        if(current->data == key){
            current->data = 0;
            return;
        }
        current = current->next;
    }
    printf("Data %d NOT found! Altering failed!\n", key);
}

void deleteHead(Node **head){
    if(*head == NULL){
        printf("List is EMPTY!\n");
        return;
    } else {
        Node *temp = *head;
        free(*head);
        *head = temp->next;
    }
}

void deleteNode(Node **head, int key){
    if(*head == NULL){
        printf("List is EMPTY!\n");
        return;
    }

    Node *current = *head;
    if((*head)->next == NULL){
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        *head == NULL;
    }
    while(current->next != NULL && current->next->data != key){
        current = current->next;
    }
    if(current->next == NULL){
        printf("Data %d NOT found! Deletion failed!\n", key);
    }
    Node *temp = current->next;
    current->next = temp->next;
    free(temp);
}

void deleteTail(Node **head){
    Node *current = *head;
    if(*head == NULL){
        printf("List is EMPTY!\n");
    } else if((*head)->next == NULL) {
        free((*head)->next);
        *head = NULL;
    }
    while(current->next->next != NULL){
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

void freeList(Node **head){
    Node *current = *head;
    while(current != NULL){
        Node *temp = current;
        free(temp);
        current = current->next;
    }
    *head = NULL;
}

//==========================================DISPLAY==========================================
void listLen(Node *head){
    int count = 0;
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