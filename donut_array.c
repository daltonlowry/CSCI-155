#include <stdio.h>

int main() {
   
   float donut[5] = {1.25, 1.75, 2.25, 2.75, 3.00};
   int yourChoice, i;
   
   printf("\n**Menu**\n\n");
   
   for (i = 1; i <= 5; ++i) {
       printf("Donut %d: $%0.2f\n", i, donut[i - 1]);
   }
   
   printf("\nEnter the donut number you want to buy\n");
   scanf("%d", &yourChoice);
   
   printf("The price for your choice is: %0.2f\n", donut[yourChoice - 1]);
   
   return 0;
   
}
