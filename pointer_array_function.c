#include <stdio.h>

myFun1(int *pointer1, int size) {
   int i;
   for (i = 0; i < size; ++i) {
       *pointer1 = *pointer1 + 100;
       printf("Value on var[%d] is %d\n", i, *pointer1);
       ++pointer1;
   }
}

myFun2(int *pointer2, int start, int finish) {
   int j;
   for (j = start; j < finish; ++j) {
       *pointer2 = 1234;
       printf("Value of var[%d] is %d\n", j, *pointer2);
       ++pointer2;
   }
}

int main() {
   
   int var[] = {11, 22, 33, 44, 55, 66, 77};
   myFun1(var, 7);
   printf("\n");
   myFun2(var, 1, 5);
   
   return 0;
   
}
