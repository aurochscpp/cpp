
#include <iostream>

using namespace std;

//输出定义的变量地址：
//了解 什么是内存地址以及如何访问它
int main ()
{
   int  var1;
   char var2[10];

   cout << "var1 变量的地址： ";
   cout << &var1 << endl;

   cout << "var2 变量的地址： ";
   cout << &var2 << endl;

   return 0;
}
