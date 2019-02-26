#include <stdio.h>

int main() {
    
   int howMany;
    
   printf("Welcome to the party! How many are in your group?\n");
   scanf("%d", &howMany);
   
   if (howMany >= 20) {
       printf("That's a large group! Take our conference room\n");
   }
   else if (howMany < 20 && howMany >= 10) {
       printf("You can take one of our booths!\n");
   }
   else if (howMany < 10 ) {
       printf("Take one of our tables!\n");
   }
   
   return 0;
}
