#include <stdio.h>
#include <stdlib.h>

int main() {
   
   int* iptr = NULL;
   int sum = 0;
   int n, i;
   
   printf("Enter how many values you are gonna store: ");
   scanf("%d", &n);
   
   iptr = (int*)malloc(n*sizeof(int));
   
   printf("Enter %d numbers:\n", n);
   
   for (i = 0; i < n; ++i) {
       printf("Enter %d: ", i);
       scanf("%d", &(iptr[i]));
       sum = sum + iptr[i];
   }
   
   printf("Sum = %d\n", sum);
   
   free(iptr);
   
   return 0;
   
}
