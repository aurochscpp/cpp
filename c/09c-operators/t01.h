

#include <stdio.h>

int main()
{
   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 - c 的值是 %d\n", c );
   c = a - b;
   printf("Line 2 - c 的值是 %d\n", c );
   c = a * b;
   printf("Line 3 - c 的值是 %d\n", c );
   c = a / b;
   printf("Line 4 - c 的值是 %d\n", c );
   c = a % b;
   printf("Line 5 - c 的值是 %d\n", c );
   c = a++; 
   printf("Line 6 - c 的值是 %d\n", c );
   c = a--; 
   printf("Line 7 - c 的值是 %d\n", c );

}

// Line 1 - c 的值是 31
// Line 2 - c 的值是 11
// Line 3 - c 的值是 210
// Line 4 - c 的值是 2
// Line 5 - c 的值是 1
// Line 6 - c 的值是 21
// Line 7 - c 的值是 22
