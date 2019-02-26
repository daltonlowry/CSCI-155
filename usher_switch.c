#include <stdio.h>

int main() {
    
   int howMany;
    
   printf("Welcome to the party! How many are in your group?\n");
   scanf("%d", &howMany);
   
   switch (howMany) {
      case 20:
      case 19:
      case 18:
      case 17:
      case 16:
      case 15:
      case 14:
      case 13:
      case 12:
      case 11:
      printf("Take our conference room!\n");
      break; 
      
      case 10:
      case 9:
      case 8:
      case 7:
      case 6:
      printf("Take our booth!\n");
      break;
      
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
      printf("Take the tables\n");
      break;
   }
   
   return 0;
}
