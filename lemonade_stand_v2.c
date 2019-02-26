#include<stdio.h>

int main() {
   char customerName[20];
   char payAnswer[3];
   int numGlasses;
   double glassPrice = 0.50;
   double totCost;
   double customerPay;
   double change;
   
   printf("Hello, I am lemonade robo! What is your name?\n");
   scanf("%s", customerName);
   printf("Hi, %s! How many glasses of lemonade would you like to buy?\n", customerName);
   scanf("%d", &numGlasses);
   
   totCost = glassPrice * numGlasses;
   
   printf("Great! %d glasses will cost $%f.\n", numGlasses, totCost);
   
   printf("Are you paying with a $20 bill?\n");
   scanf("%s", payAnswer);
   
   if (strcmp(payAnswer, "Yes") == 0)
   {
      change = 20 - totCost;
      printf("Great! Your change is $%f\n", change);
   }
   else 
   {
      printf("What will you be paying with then?\n");
      scanf("%lf", &customerPay);
      change = customerPay - totCost;
      printf("Your change will be $%f!\n", change);
   }
   
   return 0;
}
