#include <stdlib.h>
#include "linked_list.h"

LinkedList *list_create(void){
    LinkedList *list = malloc(sizeof(LinkedList));
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

void list_destroy(LinkedList *list, void (*free_func)(void *)){
    if (list == NULL)
        return;
    Node *curr = list->head;
    while (curr != NULL){
        Node *next = curr->next;
        if (free_func){
            free_func(curr->data);
        }
        free(curr);
        curr = next;
    }
    free(list);
}

void list_append(LinkedList *list, void *data){
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if (list->head == NULL){
        list->head = newNode;
        list->tail = newNode;
    }
    else{
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->size++;
}

void list_remove(LinkedList *list, size_t index, void (*free_func)(void *)){
    if (index >= list->size)
        return;
    Node *target = get_node_index(list, index);
    if (target == list->head){
        list->head = target->next;
        if (free_func){
            free_func(target->data);
        }
        free(target);
        list->size--;
    }
    else if (target == list->tail){
        Node *prev = get_node_index(list, index-1);
        prev->next = NULL;
        list->tail = prev;
        if (free_func){
            free_func(target->data);
        }
        free(target);
        list->size--;
    }
    else{
        Node *prev = get_node_index(list, index-1);
        prev->next = target->next;
        if (free_func){
            free_func(target->data);
        }
        free(target);
        list->size--;
    }
}


Node *get_node_index(LinkedList *list, size_t index){
    Node *curr = list->head;
    size_t curr_index = 0;
    while (curr != NULL){
        if (curr_index == index){
            return curr;
        }
        curr = curr->next;
        curr_index++;
    }
    return NULL;
}

void list_print(LinkedList *list, void (*print_func)(void *)){
    printf("LIST SIZE IS: %ld", list->size);
    for (Node *i=list->head; i!=NULL; i=i->next){
        print_func(i->data);
    }
}