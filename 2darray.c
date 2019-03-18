#include <stdio.h>

int main() {
   
   int myArray[3][3] = {{1, 11, 111}, {2, 22, 222}, {3, 33, 333}};
   int i;
   int j;
   
   for (i = 0; i < 3; ++i) {
       for (j = 0; j < 3; ++j) {
           printf("myArray[%d][%d] = %d\n", i, j, myArray[i][j]);
       }
   }
   
   printf("\n");
   
   return 0;
   
}
