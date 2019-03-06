#include <stdio.h>

int main() {
    
   int myArray[5] = {1, 2, 3, 4, 5};
   int reverseArray[5];
   int i, k = 0;
   
   for (i = 4; i >= 0; --i) {
       reverseArray[k] = myArray[i];
       ++k;
   }
   
   for (i = 0; i < 5; ++i) {
       printf("reverseArray[%d] = %d\n", i, reverseArray[i]);
   }
   
   return 0; 
   
}
