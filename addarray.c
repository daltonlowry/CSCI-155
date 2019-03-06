#include <stdio.h>

int main() {

   int arrayOne[5] = {1, 1, 1, 1, 1};
   int arrayTwo[5] = {5, 5, 5, 5, 5};
   int sumArray[5];
   int i;
   
   for (i = 0; i < 5; ++i) {
       printf("arrayOne[%d] = %d\t", i, arrayOne[i]);
       printf("arrayTwo[%d] = %d\t", i, arrayTwo[i]);
       sumArray[i] = arrayOne[i] + arrayTwo[i];
       printf("sumArray[%d] = %d\n", i, sumArray[i]);
   }
   
   return 0;
}
