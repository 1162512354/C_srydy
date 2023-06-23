#include <stdio.h>
/************************************************
 * 常见关键字：int，for，
************************************************    /

/********register定义为寄存器变量*********/
/***
int main()
{
    register int a = 10;//将a定义为寄存器变量   
    return 0;
}
***/

/********typedef类型重定义(别名)*********/

/***
int main()
{
    typedef unsigned int u_int;
    //unsigned定义int为无符号的整形变量，typedef类型重定义unsigned int别名为u_int。
    u_int num = -20;
    //定义后u_int = unsigned int

    return 0;
}
***/

/********static修饰变量或函数；extern声明外部符号*********/

/***
void test()
{
    static int a = 1;
    //static修饰a为静态局部变量
    //修饰为静态局部变量后生命周期变长了
    a++;
    printf("a = %d\n", a);

}

//在cs3.1.c中static int abc = 123;
//将该全局变量修饰为静态的，修饰后不能在自己所在的源文件以外的地方使用
//改变了abc的作用域
//这个时候就无法在cs3.c中使用extern进行调用
extern int abc;//声明外部符号


//在cs3.1.c中static int add(int x, int y)修饰函数
//static修饰函数改变了函数的链接属性
extern int Add(int, int);//声明外部函数

int main()
{
    int i = 0;
//    while(i < 5)
//    {
//        test();
//        i++;
//    }


    int a = 10, b = 20;
    int sum;
    sum = Add(a, b);
    printf("sum = %d\n", sum);

    return 0;
}
***/

/********#define*********/

/***

//#define定义标识符常量，定义后碰到MAX都默认为100
//#define MAX = 100



//宏的定义方式,
//三目操作符X>Y为真时执行X否则执行Y
#define MAX(X, Y) (X > Y ? X:Y)
int main()
{
//    int a = MAX;//MAX = 100

    int a = 30, b = 20;
    int max = MAX(a, b);
    printf("max = %d\n", max);

    return 0;
}
***/

/************************************************
 * 指针
************************************************/
int main()
{
    int a = 10;//int分配4个字节的空间
    //&a;取地址操作符
    int* p = &a;//int*为定义指针
    //有一种变量被用来储存地址，
    //这种变量被称为指针变量
    *p = 20;//*是解引用操作符
    printf("%d\n", a);
    printf("%p\n", &a);//%p用来打印地址，打印出来是16进制的

    return 0;
}