#include <stdio.h>

int main() {
   
   int add_result, sub_result;
   
   add_result = add(10, 2);
   sub_result = sub(10, 2);
   
   printf("a + b is %d\n", add_result);
   printf("c - d is %d\n", sub_result);
   
   return 0;
}

add(int a, int b) {
   int f;
   f = a + b;
   
   return f;
}

sub(int c, int d) {
   int e;
   e = c - d;
   
   return e;
}
