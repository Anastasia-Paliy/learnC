#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct LinkedList {
    int size;
    Node *head;
    Node *prev;
    Node *tail;
} LinkedList;

Node *initNode(int value) {
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

LinkedList *initLinkedList() {
    LinkedList *list = malloc(sizeof(LinkedList));
    list->size = 0;
    list->head = NULL;
    list->prev = NULL;
    list->tail = NULL;
    return list;
}

LinkedList addNode(LinkedList *list, int value) {
    Node *node = initNode(value);
    if (list->size == 0) {
        list->head = node;
        list->tail = node;
    } else if (list->size == 1){
        list->prev = list->tail;
        list->prev->next = node;
        list->tail = node;
    } else {
        list->tail->next = node;
        list->prev = list->tail;
        list->tail = node;
    };
    list->size += 1;
    return *list;
}

void display(LinkedList *list) {
    if (list->size == 0) {
        printf("Empty list \n");
    } else {
        Node *current = list->head;
        while (current != NULL) {
            printf("%d ", current->value);
            current = current->next;
        }
        printf("\n");
    }
}


LinkedList deleteLastNode(LinkedList *list) {
    list->tail = NULL;
    return *list;
}


int main() {
    LinkedList *list = initLinkedList();
    display(list);
    *list = addNode(list, 1);
    display(list);
    *list = addNode(list, 2);
    display(list);
    return 0;
}





