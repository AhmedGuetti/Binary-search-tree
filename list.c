#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"
#include "list.h"



TreeQueue* queue(){
    TreeQueue* new_queue = (TreeQueue*)malloc(sizeof(TreeQueue));
    *new_queue = NULL;
    return new_queue;
}

TreeQueue make_element(Tree data){
    TreeQueue new_element = (TreeQueue)malloc(sizeof(TreeQueue));
    new_element->data = data;
    new_element->next = NULL;
    return new_element;
}

void push(TreeQueue* queue,Tree data){
    TreeQueue new_node = make_element(data);
    if (*queue == NULL){
        *queue = new_node;
    }
    else{
        new_node->next = *queue;
        *queue = new_node;
    }
}
void pop(TreeQueue* queue,Tree data){
    TreeQueue curr = *queue;
    while (curr != NULL)
    {
        curr = curr->next;
    }
    free(curr);
}
bool isEmpty(TreeQueue* queue){
    if(*queue == NULL) return true;
    else return false;
}