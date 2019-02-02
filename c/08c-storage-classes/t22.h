
// support.c
// extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候

#include <stdio.h>

extern int count;

void write_extern(void)
{
   printf("count is %d\n", count);
}

/*
    第二个文件中的 extern 关键字用于声明已经在第一个文件 main.c 中定义的 count
    编译这两个文件：
    $ gcc main.c support.c
    这会产生 a.out 可执行程序，当程序被执行时，它会产生下列结果：
    count is 5
*/

