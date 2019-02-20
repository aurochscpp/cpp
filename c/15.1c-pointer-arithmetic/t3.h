
#include <stdio.h>

const int MAX = 3;

int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* 指针中第一个元素的地址 */
   ptr = var;
   i = 0;
   while ( ptr <= &var[MAX - 1] )
   {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* 指向上一个位置 */
      ptr++;
      i++;
   }
   return 0;
}

// Address of var[0] = bfdbcb20
// Value of var[0] = 10
// Address of var[1] = bfdbcb24
// Value of var[1] = 100
// Address of var[2] = bfdbcb28
// Value of var[2] = 200
