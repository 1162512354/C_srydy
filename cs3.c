#include <stdio.h>
//常见关键字：int，for，

/********register*********/
/***
int main()
{
    register int a = 10;//将a定义为寄存器变量   
    return 0;
}
***/

/********typedef*********/
int main()
{
    typedef unsigned int u_int;
    //unsigned定义int为无符号的整形变量，typedef类型重定义unsigned int别名为u_int。
    u_int num = -20;

    return 0;
}