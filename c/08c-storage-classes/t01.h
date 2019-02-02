
#include <stdio.h>
 
/* 函数声明 */
void func(void);

static int count = 5; /* 全局变量 */

main()
{
   while(count--)
   {
      func();
   }
   return 0;
}
/* 函数定义 */
void func( void )
{
   static int i = 5; /* 局部静态变量 */
   i++;
   printf("i is %d and count is %d\n", i, count);
}

/* 
    i is 6 and count is 4
    i is 7 and count is 3
    i is 8 and count is 2
    i is 9 and count is 1
    i is 10 and count is 0

*/


