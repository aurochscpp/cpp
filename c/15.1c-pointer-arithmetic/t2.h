
#include <stdio.h>

const int MAX = 3;

int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* 指针中最后一个元素的地址 */
   ptr = &var[MAX-1];
   for ( i = MAX; i > 0; i--)
   {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* 移动到下一个位置 */
      ptr--;
   }
   return 0;
}

// Address of var[3] = bfedbcd8
// Value of var[3] = 200
// Address of var[2] = bfedbcd4
// Value of var[2] = 100
// Address of var[1] = bfedbcd0
// Value of var[1] = 10
