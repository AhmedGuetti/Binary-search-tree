#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "bst.h"


#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

Tree* makeBST(){
    Tree* new_tree = (Tree*)malloc(sizeof(Tree));
    *new_tree = NULL;
    return new_tree;
}
Tree make_node(int data){
    Tree new_node = (Tree)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

void Inserte(Tree* treename,int data){
    if (*treename == NULL) {
        *treename = make_node(data);
    }
    else if(data <= (*treename)->data ){
        
        Inserte(&(*treename)->left,data);
    }
    else{
        Inserte(&(*treename)->right,data);
    }
}
int TreeMin(Tree treename){
    if(treename == NULL) {
        printf("The list is Empty");
        return -1;
         }
    while (treename->left != NULL){
        treename = treename->left;
    }
    
   return treename->data;
}

int TreeMax(Tree* treename){
    if(*treename == NULL) return -1;
    else if((*treename)->right == NULL) return (*treename)->data;
    TreeMax(&(*treename)->right);
}



int height(Tree* treename){

    if (*treename == NULL) return -1;
 
    return MAX(height(&(*treename)->left) ,height(&(*treename)->right))+1;

}


void print_current_level(Tree* treename, int level){

    if (*treename == NULL) return;
    if (level == 1)
        printf("%d ", (*treename)->data);
    else if(level > 1)
         print_current_level(&(*treename)->left,level-1);
         print_current_level(&(*treename)->right,level-1);
}


void print_level_order(Tree* treename){
    int treeheight = height(treename);
    printf("%d\n",treeheight);
    for (int i = 1; i <= treeheight+1; i++)
    {

        print_current_level(&(*treename),i);
    }
    
}

void Preorder(Tree* treename){
    if (*treename == NULL) return;
    
    printf("%d ",(*treename)->data);
    Preorder(&(*treename)->left);
    Preorder(&(*treename)->right);    
}

void Inorder(Tree* treename){
    if (*treename == NULL) return;
    Inorder(&(*treename)->left);
    printf("%d ",(*treename)->data);
    Inorder(&(*treename)->right);
    
}

void Postorder(Tree* treename){
    if (*treename == NULL) return;
    Postorder(&(*treename)->left);
    Postorder(&(*treename)->right);
    printf("%d ",(*treename)->data);
    
}