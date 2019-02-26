#include <stdio.h>

int main() {
   
   char firstName[10];
   char lastName[10];
   int numApples;
   const double costApple = 0.25;
   int numBills;
   double totCost;
   double totPay;
   double change;
   
   printf("Hi welcome to my orchard. What's your name?\n");
   scanf("%s %s", firstName, lastName);         // Scans the customer's first and last name
   
   printf("Hi %s %s, it's $%0.2f for an apple.\n", firstName, lastName, costApple);
   printf("How many apples did you pick?\n");
   scanf("%d", &numApples);                     // Scans the number of apples the customer picked
   
   totCost = numApples * costApple;             // Calculates the total cost according to the number of apples picked
   printf("You owe me $%0.2f\n", totCost);
   
   printf("I only accept 5 dollar bills. How many $5 bills are you inserting?\n");
   scanf("%d", &numBills);                      // Scans the number of $5 bills the customer inserts
   
   totPay = 5 * numBills;                       // Calculates the total amount the customer has paid
   printf("Thank you. You paid me a total of %0.2f.\n", totPay);
   
   change = totPay - totCost;                   // Calculates the change the customer will get back
   printf("Here is your $%0.2f change back! ", change);
   printf("Thank you for picking apples with me Mr. %s.\n", lastName);
   
   return;
}
