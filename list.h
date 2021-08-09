#ifndef _LIST_H_
#define _LIST_H_
#include "bst.h"
struct Treequeue{
    Tree data;
    struct node* next;
};


typedef struct Treequeue TreeQueueNode;
typedef struct Treequeue * TreeQueue;




#endif
