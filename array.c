/*
   Author: Dalton Lowry
   Class: CSCI 155
   Section: 01
   Date: March 7, 2019
   Filename: array.c
   Desc: This code gives you different options in manipulating and array. There
   is a single array that can be set to zeros, incremented, randomized, 
   averaged, have a specific index changed, flipped, negated, and the ability
   to search how many times a number appears in the array.
*/

#include <stdio.h>

int main() {
    
   int myArray[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   double averageSum;
   double average;
   int userChoice;
   int optionTwo;
   int index;
   int indVal;
   int forward;
   int searchVal;
   int count;
   int i;
   int j;
   int k = 19;
   
   // The while loop continuously loops through the menu so the user can 
   // complete as many tasks as they would like
   while (userChoice != 9) {
       printf("What do you want to do?\n\n");
       printf("1. All 0's\n2. Increasing\n3. Random\n4. Average\n5. Change value\n6. Flip\n7. Negate\n8. Search\n9. Exit\n\n");
       scanf("%d", &userChoice);
       printf("\n");
       
       // Option one prints the array with all zeros
       if (userChoice == 1) {
           for (i = 0; i < 20; ++i) {
               myArray[i] = 0;
           }
           
           printf("[%d", myArray[0]);
           for (i = 0; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]);
       }
       
       // Option two reads the user inputted starting value and increments the
       // remaining indicies in the array by one each time
       else if (userChoice == 2) {
           printf("What value do you want?\n\n");
           scanf("%d", &optionTwo);
           printf("\n");
           
           myArray[0] = optionTwo;
           
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               myArray[i] = myArray[i - 1] + 1;
               printf(", %d", myArray[i]);
           }
           myArray[19] = myArray[18] + 1;
           printf(", %d]\n\n", myArray[19]);
       }
       
       // Option three produces an array full of random values
       else if (userChoice == 3) {
           myArray[0] = rand() % 101;
           
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               myArray[i] = rand() % 101;
               printf(", %d", myArray[i]);
           }
           myArray[19] = rand() % 101;
           printf(", %d]\n\n", myArray[19]);
       }
       
       // Option four gives you the average of all of the values within the 
       // array
       else if (userChoice == 4) {
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]); 
           
           for (i = 0; i < 20; ++i) {
               averageSum = averageSum + myArray[i];
           }
           
           average = averageSum / 20.0;
           
           printf("The average is: %0.3f\n\n", average);
       }
       
       // Option five allows you to change whichever index in the array with 
       // a user inputted value and continues to ask if the index is invalid
       else if (userChoice == 5) {
           printf("What index do you want to change?\n\n");
           scanf("%d", &index);
           
           while (index >= 20) {
               printf("\nInvalid index. Please try again.\n\n");
               printf("What index do you want to change?\n\n");
               scanf("%d", &index);
           }
           
           printf("\nWhat value do you want to put in that index?\n\n");
           scanf("%d", &indVal);
           printf("\n");
           
           myArray[index] = indVal;
           
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]);
       }
       
       // Option 6 flips the values in the array and reverses the order
       else if (userChoice == 6) {
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]);
           
           while(j < (k - j)) {
               forward = myArray[j];
               myArray[j] = myArray[k - j];
               myArray[k - j] = forward;
               j++;
           }
           
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]);
       }
       
       // Option 7 negates the array making every value negative
       else if (userChoice == 7) {
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]);
           
           for (i = 0; i < 20; ++i) {
               myArray[i] = myArray[i] * -1;
           }
           
           printf("[%d", myArray[0]);
           for (i = 1; i <= 18; ++i) {
               printf(", %d", myArray[i]);
           }
           printf(", %d]\n\n", myArray[19]);
       }
       
       // Option 8 counts the number of times a number appears within the array
       else if (userChoice == 8) {
           printf("What value are you looking for?\n\n");
           scanf("%d", &searchVal);
           
           for (i = 0; i < 20; ++i) {
               if (myArray[i] == searchVal) {
                   ++count;
               }
           }
           
           printf("\nTotal number of times in the array: %d\n\n", count);
       }
   }
   
   printf("Thank you, have a great day!\n\n");
   
   return 0;
   
}
