#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


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

int Min(Tree treename){
    if(treename == NULL) {
        printf("The list is Empty");
        return -1;
         }
    while (treename->left != NULL){
        treename = treename->left;
    }
    
   return treename->data;
}

int Max(Tree* treename){
    if(*treename == NULL) return -1;
    else if((*treename)->right == NULL) return (*treename)->data;
    Max(&(*treename)->right);
}