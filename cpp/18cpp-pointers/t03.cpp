
#include <iostream>

using namespace std;

//输出定义的变量地址：
//了解 什么是内存地址以及如何访问它
int main ()
{
   int  var1;
   char var2[10];
	
    //每一个 变量都有一个内存位置 ，
    //每一个内存位置都定义了 可使用连字号（&）运算符访问的地址 ，
    //它表示了在内存中的一个地址。
   cout << "var1 变量的地址： ";
   cout << &var1 << endl;

   cout << "var2 变量的地址： ";
   cout << &var2 << endl;


   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
   ip = &var;       // 在指针变量中存储 var 的地址
    // 指针是一个变量，其值为 另一个变量的地址 ，即， 内存位置的直接地址 。


   cout << "Value of var variable: ";
   cout << var << endl;

   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;
	
	
   return 0;
}
