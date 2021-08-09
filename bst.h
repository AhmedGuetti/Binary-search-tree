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
int TreeMin(Tree treename);
int TreeMax(Tree* treename);
int height(Tree* treename);
void print_current_level(Tree* treename, int level);
void print_level_order(Tree* treename);
#endif

