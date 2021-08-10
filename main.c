#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
Inserte(bst1,56);
Inserte(bst1,78);
Inserte(bst1,46);
Inserte(bst1,5);
Inserte(bst1,9);

printf("%d,%d\n",TreeMax(bst1),TreeMin(*bst1));

printf("%d\n",height(bst1));
print_current_level(bst1, 2);
print_current_level(bst1, 3);


printf("\n");
printf("%d\n",height(bst1));
print_level_order(bst1);
printf("\n");
Preorder(bst1);
printf("\n");
Inorder(bst1);
printf("\n");
Postorder(bst1);
printf("\n");
printf("%d",isbst(bst1));



Delete(bst1,46);



printf("\n");

Preorder(bst1);
printf("\n");
Inorder(bst1);
printf("\n");
Postorder(bst1);
printf("\n");
    return 0;
}