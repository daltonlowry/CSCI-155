/*
   Author: Dalton Lowry
   Class: CSCI 155
   Section: 01
   Date: April 18, 2019
   Filename: malloc2.c
   Desc: This code prompts the user to fill two 2D arrays of what ever size 
   they choose and it will add the two arrays together to get a third array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main() {
   
   int *ptr1[10];
   int *ptr2[10];
   int *ptr3[10];
   int i, j, n, m;
   
   
   printf("Enter the number of variables you want to store in the rows: ");
   scanf("%d", &n);     // scans number of rows to store variables
   
   printf("Enter the number of variables you want to store in the columns: ");
   scanf("%d", &m);     // scans number of columns to store variables
   
   // allocates memory to an array of pointers for array1
   for (i = 0; i < n; ++i) {
      ptr1[i] = (int*)malloc(m*sizeof(int));
   }
   
   // user populated 2D array1
   for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
         printf("Enter array1[%d][%d]: ", i, j);
         scanf("%d", &ptr1[i][j]);
      }
   }
   
   // allocates memory to an array of pointers for array2
   for (i = 0; i < n; ++i) {
      ptr2[i] = (int*)malloc(m*sizeof(int));
   }
   
   printf("\n");
   
   // user populated 2D array2
   for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
         printf("Enter array2[%d][%d]: ", i, j);
         scanf("%d", &ptr2[i][j]);
      }
   }
   
   printf("\n");
   
   // allocates memory to an array of pointer for array3
   for (i = 0; i < n; ++i) {
      ptr3[i] = (int*)malloc(m*sizeof(int));
   }
   
   // adds the two arrays and stores it in a third array
   for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
         ptr3[i][j] = ptr1[i][j] + ptr2[i][j];
      }
   }
   
   // prints the third array of the summed array1 and array2
   for (i = 0; i < n; ++i) {
      for (j = 0; j < m; ++j) {
         printf("array[%d][%d] = %d\n", i, j, ptr3[i][j]);
      }
   }
   
   return 0;
   
}
