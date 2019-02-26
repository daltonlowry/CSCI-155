#include <stdio.h>

int main() {
   float r, h, SA, V;
   float pi = 3.1415;
    
   // Sphere
    
   // Surface Area
   printf("Surface Area and Volume for a Sphere\n\n");
   printf("Input radius: ");
   scanf("%f", &r);    // scans the users input radius
   SA = 4 * pi * r * r;    // surface area of a sphere
   printf("\nThe surface area is: %f\n", SA);    // prints calculated surface area
    
   // Volume
   V = 4/3 * pi * r * r * r;   // volume of a sphere
   printf("The volume is: %f\n\n", V);   //prints calculated volume
    
   //Cylinder
    
   // Surface Area
   printf("Surface Area and Volume for a Cylinder\n\n");
   printf("Input radius: ");
   scanf("%f", &r);    //scans the users input radius
   printf("Input height: ");
   scanf("%f", &h);    //scans the users input height
   SA = 2 * pi * r * (r + h);  // surface area of a cylinder
   printf("\nThe surface area is: %f\n", SA);    // prints calculated surface area
    
   //Volume
   V = pi * r * r * h;     // volume of a cylinder
   printf("The volume is: %f\n\n", V);   // prints calculated volume
    
   return 0;
}
