#include <stdio.h>
#include <math.h>

int main() {
   double x1, x2, xDist, y2, y1, yDist, d;   // Initializes the variables used
   
   // Input for the x values of the coordinates
   printf("Input the x values from the two coordinates:\n");
   printf("x1 value: ");
   scanf("%lf", &x1);               // Scans user value for x1
   printf("x2 value: ");
   scanf("%lf", &x2);               // Scans user value for x2
   
   // Input for the y value of the coordinates
   printf("\nInput the y values from the two coordinates:\n");
   printf("y1 value: ");
   scanf("%lf", &y1);               // Scans user value for y1
   printf("y2 value: ");
   scanf("%lf", &y2);               // Scans user value for y2
   
   xDist = pow(fabs(x2 - x1), 2);   // Calculates the distance between the x 
                                    // coordinates
   yDist = pow(fabs(y2 - y1), 2);   // Calculates the distance between the y 
                                    // coordinates
   
   d = sqrt(xDist + yDist);         // Calculates the total distance between the
                                    // two points
   
   // Outputs the final distance between the points
   printf("\nThe distance between the two points is: %lf\n\n", d);
   
   return;
}
