#include<stdio.h>

int main() {
   char customerName[20];
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
   
   printf("How much are you paying for this with?\n");
   scanf("%lf", &customerPay);
   
   change = customerPay - totCost;
   
   printf("Your change is $%f! Thank you and come again!\n", change);
   
   return 0;
}
