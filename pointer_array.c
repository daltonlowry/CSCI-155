#include <stdio.h>

int main() {
   
   int num1[5] = {1, 2, 3, 4, 5};
   int num2[5] = {2, 4, 6, 8, 10};
   int num3[5];
   int i, j;
   
   int *ptr1 = num1;
   int *ptr2 = num2;
   int *ptr3 = num3;
   
   for (i = 0; i < 5; ++i) {
       ptr3[i] = ptr1[i] + ptr2[i];
   }
   
   for (j = 0; j < 5; ++j) {
       printf("%d\t", ptr3[j]);
   }
   
   printf("\n");
   
   return 0;
   
}
