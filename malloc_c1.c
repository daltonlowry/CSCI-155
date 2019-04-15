#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int numVals;
   int* userVals = NULL;
   int i;
   
   printf("Enter the number of integers that you will need\n");
   scanf("%d", &numVals);
   
   userVals = (int*)malloc(numVals*sizeof(int));
   
   printf("Enter %d values\n", numVals);
   
   for (i = 0; i < numVals; ++i) {
       printf("Value: ");
       scanf("%d", &(userVals[i]));
   }
   
   printf("You entered:\n");
   
   for (i = 0; i < numVals; ++i) {
       printf("%d\t", userVals[i]);
   }
   
   free(userVals);
   
   printf("\n");
   
   return 0;

}
