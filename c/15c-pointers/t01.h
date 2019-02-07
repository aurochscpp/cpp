
#include <stdio.h>

int main ()
{
   int  var1;
   char var2[10];

   printf("var1 变量的地址： %x\n", &var1  );
   printf("var2 变量的地址： %x\n", &var2  );

   return 0;
}

/*
   它将输出定义的变量地址：
   var1 变量的地址： bff5a400
   var2 变量的地址： bff5a3f6

   我们了解了什么是内存地址以及如何访问它
*/




