#include <stdio.h>
#include <stdlib.h>
#include "bst.h"
#include "list.h"





int main(){


Node** bst1 = makeBST();



Inserte(bst1,15);
Inserte(bst1,10);
Inserte(bst1,20);
Inserte(bst1,25);
Inserte(bst1,12);
Inserte(bst1,17);
Inserte(bst1,8);

printf("%d,%d\n",TreeMax(bst1),TreeMin(*bst1));
printf("%d\n",height(bst1));




    return 0;
}