/*
   Author: Dalton Lowry
   Class: CSCI 155
   Section: 01
   Date: April 18, 2019
   Filename: malloc1.c
   Desc: This code prompts the user to fill two 1D arrays of what ever size 
   they choose and it will add the two arrays together to get a third array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
   
   int *ptr1;
   int *ptr2;
   int *ptr3;
   int i, j, n;
   
   
   printf("Enter the number of variables you want to store for your arrays: ");
   scanf("%d", &n);         // scans the number of variables each array holds
   
   ptr1 = (int*)malloc(n*sizeof(int));      // allocates memory for array1
   ptr2 = (int*)malloc(n*sizeof(int));      // allocates memory for array2
   ptr3 = (int*)malloc(n*sizeof(int));      // allocates memory for array3
   
   // user populated array1
   for (i = 0; i < n; ++i) {
       printf("Enter array1[%d]: ", i);
       scanf("%d", &(ptr1[i]));
   }
   
   // user populated array2
   for (j = 0; j < n; ++j) {
        printf("Enter array2[%d]: ", j);
        scanf("%d", &(ptr2[j]));
   }
   
   // adds the arrays together and stores it in a third
   for (i = 0; i < n; ++i) {
       ptr3[i] = ptr1[i] + ptr2[i];
   }
   
   // prints the third array
   for (j = 0; j < n; ++j) {
       printf("array[%d] = %d\n", j, ptr3[j]);
   }
   
   return 0;
   
}
