
#include <stdio.h>

const int MAX = 3;

int main ()
{
   int  var[] = {10, 100, 200};
   int  i, *ptr;

   /* 指针中的数组地址 */
   ptr = var;
   for ( i = 0; i < MAX; i++)
   {

      printf("Address of var[%d] = %x\n", i, ptr );
      printf("Value of var[%d] = %d\n", i, *ptr );

      /* 移动到下一个位置 */
      ptr++;
   }
   return 0;
}

// Address of var[0] = bf882b30
// Value of var[0] = 10
// Address of var[1] = bf882b34
// Value of var[1] = 100
// Address of var[2] = bf882b38
// Value of var[2] = 200



