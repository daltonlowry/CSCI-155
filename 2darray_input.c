#include <stdio.h>

int main() {
   
   int array[3][3];
   int i, j;
   
   for (i = 0; i < 3; ++i) {
       for (j = 0; j < 3; ++j) {
           printf("Enter the values for array[%d][%d]\n", i, j);
           scanf("%d", &array[i][j]);
       }
   }
   
   for (i = 0; i < 3; ++i) {
       for (j = 0; j < 3; ++j) {
           printf("array[%d][%d] = %d\n", i, j, array[i][j]);
       }
   }
   
   printf("\n");
   
}
