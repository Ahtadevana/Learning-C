#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
    struct node *next;
    int data;
} Node;

Node* createNode(int data);
void insertAtHead(Node **head, int data);
void insertAtValue(Node **head, int key, int data);
void insertAtTail(Node **head, int data);

void deleteHead(Node **head);
void deleteValue(Node **head, int key);
void deleteTail(Node **head);
void freeList(Node **head);

bool searchNode(Node *head, int key);
Node* copyNode(Node *head, int key);
void printList(Node *head);

int main(){
    Node *head = createNode(20);

    insertAtHead(&head, 10);
    printList(head);

    insertAtTail(&head, 40);
    printList(head);

    Node *master = copyNode(head, 20);
    printf("Master branch: ");
    printList(master);

    insertAtValue(&head, 20, 30);
    printList(head);

    deleteHead(&head);
    printList(head);

    bool foundNode = searchNode(head, 20);
    if(foundNode){
        printf("Node found!\n");
    } else {
        printf("Node NOT found!\n");
    }

    deleteTail(&head);
    printList(head);

    insertAtHead(&head, 10);
    printList(head);

    insertAtTail(&head, 40);
    printList(head);

    deleteValue(&head, 20);
    printList(head);

    freeList(&head);
    printList(head);
    return 0;
}

Node* createNode(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Allocation failed!\n");
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

void insertAtValue(Node **head, int key, int data){
    Node *newNode = createNode(data);
    if(*head == NULL){
        (*head)->next = newNode;
    }

    Node *current = *head;
    while(current->next != NULL){
        if(current->data == key){
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
    printf("Key NOT found! Allocation failed!\n");
}

void insertAtTail(Node **head, int data){
    Node *newNode = createNode(data);
    if(*head == NULL){
        (*head)->next = newNode;
        return;
    }

    Node *current = *head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}

void deleteHead(Node **head){
    if(head == NULL){
        printf("List is EMPTY!\n");
        return;
    }
    if((*head)->next == NULL){
        free(*head);
        *head = NULL;
        return;
    }
    Node *temp = *head;
    free(temp);
    *head = (*head)->next;
}

void deleteValue(Node **head, int key){
    if(*head == NULL){
        printf("List is EMPTY!\n");
        return;
    }
    if((*head)->data == key){
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    Node *current = *head;
    while(current->next != NULL && current->next->data != key){
        current = current->next;
    }

    if(current->next == NULL){
        printf("Key NOT found!\n");
        return;
    }

    Node *temp = current->next;
    current->next = temp->next;
    free(temp);
}

void deleteTail(Node **head){
    if(*head == NULL){
        printf("list is EMPTY!\n");
        return;
    }
    if((*head)->next == NULL){
        Node *temp = *head;
        free(temp);
        *head = (*head)->next;
        return;
    }

    Node *current = *head;
    while(current->next->next != NULL){
        current = current->next;
    }
    Node *temp = current->next;
    current->next = NULL;
    free(temp);
}

void freeList(Node **head){
    if(*head == NULL){
        printf("Head is EMPTY!\n");
        return;
    }

    Node *current = *head;
    while(current != NULL){
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

bool searchNode(Node *head, int key){
    if(head == NULL){
        printf("List is EMPTY!\n");
        return false;
    }
    Node *current = head;
    while(current != NULL){
        if(current->data == key){
            return true;
        }
        current = current->next;
    }
    return false;
}

Node* copyNode(Node *head, int key){
    if(head == NULL){
        printf("List is EMPTY! Returning NULL...\n");
        return NULL;
    }

    Node *current = head;
    while(current != NULL){
        if(current->data == key){
            Node *newNode = (Node*)malloc(sizeof(Node));
            if(!newNode){
                printf("Allocation failed! Returning NULL...\n");
                return NULL;
            }
            newNode->data = current->data;
            newNode->next = NULL;
            return newNode;
        }
        current = current->next;
    }
    printf("Key NOT found! Returning NULL...\n");
    return NULL;
}

void printList(Node *head){
    Node *current = head;
    while(current != NULL){
        printf("%d -> ", current->data);
        current = current->next;
    } 
    printf("NULL\n");
}