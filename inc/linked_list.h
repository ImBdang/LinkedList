#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
typedef struct Node{
    void *data;
    struct Node *next;
} Node;

typedef struct LinkedList{
    Node *head;
    Node *tail;  
    size_t size;
} LinkedList;

LinkedList *list_create(void);
void list_destroy(LinkedList *list, void (*free_func)(void *));
void list_append(LinkedList *list, void *data);
void list_remove(LinkedList *list, size_t index, void (*free_func)(void *));
void list_print(LinkedList *list, void (*print_func)(void *));
Node *get_node_index(LinkedList *list, size_t index);

#endif