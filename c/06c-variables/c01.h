
#include <stdio.h>

// 变量声明
// 变量在头部就已经被声明，但它们是在主函数内被定义和初始化的：
extern int a, b;
extern int c;
extern float f;

int main ()
{
  /* 变量定义 */
  int a, b;
  int c;
  float f;
 
  /* 实际初始化 */
  a = 10;
  b = 20;
  
  c = a + b;
  printf("value of c : %d \n", c);

  f = 70.0/3.0;
  printf("value of f : %f \n", f);
 
  return 0;
}
// value of c : 30
// value of f : 23.333334
