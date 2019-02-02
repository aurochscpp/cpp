
// 以下实例演示了 a++ 与 ++a 的区别： 
// a++ 和 ++a的相同点都是给a+1，
// 不同点是a++是先赋值再+1，而++a则是先+1再参赋值。

#include <stdio.h>
int main()
{
    int c;
    int a = 10;
    c = a++;

    printf("先赋值后运算：\n");
    printf("Line 1 - c 的值是 %d\n", c );
    printf("Line 2 - a 的值是 %d\n", a );

    a = 10;
    c = a--;
    printf("Line 3 - c 的值是 %d\n", c );
    printf("Line 4 - a 的值是 %d\n", a );


    
    printf("先运算后赋值：\n");

    a = 10;
    c = ++a;
    printf("Line 5 - c 的值是 %d\n", c );
    printf("Line 6 - a 的值是 %d\n", a );

    a = 10;
    c = --a;
    printf("Line 7 - c 的值是 %d\n", c );
    printf("Line 8 - a 的值是 %d\n", a );
}

// 先赋值后运算：
// Line 1 - c 的值是 10
// Line 2 - a 的值是 11
// Line 3 - c 的值是 10
// Line 4 - a 的值是 9

// 先运算后赋值：
// Line 5 - c 的值是 11
// Line 6 - a 的值是 11
// Line 7 - c 的值是 9
// Line 8 - a 的值是 9

