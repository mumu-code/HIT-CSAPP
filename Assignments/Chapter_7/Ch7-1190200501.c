#include <stdio.h>

/*
    7.7题：
*/
/* bar5.c */
void f()
{
    double x = -0.0;
}
/*
    7.9题：
    bar6.c 中的 main 是弱符号，连接引用的是 foo6.c 中的 main 函数。
*/

/*
    7.11题：
    未初始化的全局变量在目标文件中没有分配存储空间，而在加载之后，会需要一些空间；所以这些空间可能是为.bss中的符号准备的。
*/