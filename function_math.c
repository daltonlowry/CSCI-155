#include <stdio.h>

int main () {
   
   int userInput;
   
   printf("Press 1 for addition and 2 for subtraction\n");
   scanf("%d", &userInput);
   
   if (userInput == 1) {
       add(40, 60);         // function call
   }
   
   if (userInput == 2) {
       sub(30, 20);
   }
   
   return 0;
}

add(int a, int b) {     // function definition
   
   int c;
   c = a + b;
   
   printf("a + b is %d\n", c);
}

sub(int c, int d) {
    
    int e;
    e = c - d;
    
    printf("c - d is %d", e);
}
