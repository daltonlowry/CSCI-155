#include <stdio.h>

int main() {
    
   int howMany;
   int burrito;
   int cheese;
   char extraCheese;
   
   printf("How many burritos do you want?\t");
   scanf("%d", &howMany);
   
   for (burrito = 1; burrito <= howMany; burrito++) {
       printf("Do you want extra cheese?\t");
       scanf(" %c", &extraCheese);
       
       if (extraCheese == 'y') {
           for (cheese = 1; cheese < 3; cheese++) {
               printf("How many portions do you want?\t");
               scanf("%d", &cheese);
               printf("Burrito no. %d has been added with %d portion of cheese\n", burrito, cheese);
           }
       }
       else {
           printf("Burrito no. %d is ready with no extra cheese\n", burrito);
       }
   }
   
   return 0;
   
}
