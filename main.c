#include <stdio.h>
#include <stdlib.h>
#include "bst.h"





int main(){


Node** bst1 = makeBST();



Inserte(bst1,15);
Inserte(bst1,10);
Inserte(bst1,20);
Inserte(bst1,25);
Inserte(bst1,12);
Inserte(bst1,17);
Inserte(bst1,8);
Inserte(bst1,0);
Inserte(bst1,13);
Inserte(bst1,-13);
printf("%d,%d\n",Max(bst1),Min(*bst1));




    return 0;
}