#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    struct node *next;
    int data;
} Node;

Node* createStack(int data);
void push(Node **top, int data);
void pop(Node **top);
void popAll(Node **top);

void peek(Node *top);
void peekAll(Node *top);
bool isEmpty(Node *top);

int main(){
    Node *top = createStack(30);

    push(&top, 20);
    push(&top, 10);
    peekAll(top);

    popAll(&top);
    peek(top);
    return 0;
}

Node* createStack(int data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Allocation Failed!\n");
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(Node **top, int data){
    Node *newNode = createStack(data);
    newNode->next = *top;
    *top = newNode;
}

void pop(Node **top){
    if(*top == NULL){
        printf("Stack is EMPTY!\n");
        return;
    }
    if((*top)->next == NULL){
        Node *current = *top;
        *top = NULL;
        free(current);
        printf("Cannot pop, stack is EMPTY!\n");
        return;
    }

    Node *temp = *top;
    *top = (*top)->next;
    free(temp);
}

void popAll(Node **top){
    if(*top == NULL){
        printf("Stack is EMPTY!\n");
        return;
    }

    Node *current = *top;
    while(current != NULL){
        Node *temp = current;
        current = current->next;
        free(temp);
    }
    *top = NULL;
}

void peek(Node *top){
    if(top == NULL){
        printf("NULL\n");
        return;
    }
    printf("%d\n", top->data);
}

void peekAll(Node *top){
    Node *current = top;

    printf("Top: ");
    while(current != NULL){
        printf("%d <- ", current->data);
        current = current->next;
    } printf("NULL\n");
}

bool isEmpty(Node *top){
    if(top == NULL){
        return true;
    }
    return false;
}