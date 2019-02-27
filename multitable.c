#include <stdio.h>

int main() {

   int product, number, iteration;
   
   printf("Enter a number:\t");
   scanf("%d", &number);
   
   for (iteration = 1; iteration <= 10; iteration++) {
       product = number * iteration;
       printf("%d x %d = %d\n", iteration, number, product);
   }
   
   return 0;
   
}
