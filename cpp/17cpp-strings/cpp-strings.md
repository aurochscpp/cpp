




https://www.w3cschool.cn/cpp/cpp-strings.html

## C++ 字符串
C++ 提供了以下两种类型的字符串表示形式：
C 风格字符串
C++ 引入的 string 类类型



#### C 风格字符串
C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 '' 终止的一维字符数组。
因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，
所以字符数组的大小比单词 "Hello" 的字符数多一个。
char greeting[6] = {'H', 'e', 'l', 'l', 'o', ''};

依据数组初始化规则，您可以把上面的语句写成以下语句：
char greeting[] = "Hello";



C++ 中有大量的函数用来操作以 null 结尾的字符串：
supports a wide range of functions that manipulate null-terminated strings:

序号	函数 & 目的
1	strcpy(s1, s2); 复制字符串 s2 到字符串 s1。
2	strcat(s1, s2); 连接字符串 s2 到字符串 s1 的末尾。
3	strlen(s1); 返回字符串 s1 的长度。

4	strcmp(s1, s2); 如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。

5	strchr(s1, ch); 返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
6	strstr(s1, s2); 返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。




#### C++ 中的 String 类
C++ 标准库提供了 string 类类型，支持上述所有的操作，另外还增加了其他更多的功能。
我们将学习 C++ 标准库中的这个类


