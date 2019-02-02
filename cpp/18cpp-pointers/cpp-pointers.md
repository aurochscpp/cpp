

## C++ 指针
通过指针，可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。
所以，想要成为一名优秀的 C++ 程序员，学习指针是很有必要的。

每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，
它表示了在内存中的一个地址。





#### 什么是指针？
指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。
就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。

指针变量声明的一般形式为：
type *var-name;
在这里，type 是指针的基类型，它必须是一个有效的 C++ 数据类型，var-name 是指针变量的名称。
用来声明指针的星号 * 与乘法中使用的星号是相同的。


但是，在这个语句中，星号是用来指定一个变量是指针。
以下是有效的指针声明：
int    *ip;    /* 一个整型的指针 */
double *dp;    /* 一个 double 型的指针 */
float  *fp;    /* 一个浮点型的指针 */
char   *ch     /* 一个字符型的指针 */


所有指针的值的实际数据类型，不管是整型、浮点型、字符型，
还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。
不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。

#### C++ 中使用指针
使用指针时会频繁进行以下几个操作：定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。
这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。

