
#ifndef _BST_H_
#define _BST_H_

struct node{
    int data;
    struct node* left;
    struct node* right;
};


typedef struct node Node;
typedef struct node * Tree;




Tree* makeBST();
void Inserte(Tree* treename,int data);
void postorderTraversal(Tree* node);
int Min(Tree treename);
int Max(Tree* treename);
#endif
