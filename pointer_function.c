#include <stdio.h>

add(int *a, int *b, int *c) {
   *c = *a + *b;
   *a = *a + 1;
   *b = *b + 1;
}

int main() {
   
   int a = 1; 
   int b = 10;
   int c = 0;
   
   printf("a: %d\tb: %d\tc: %d\n", a, b, c);
   
   add(&a, &b, &c);
   
   printf("a: %d\tb: %d\tc: %d\n", a, b, c);
   
   return 0;
   
}
