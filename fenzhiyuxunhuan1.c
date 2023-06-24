#include<stdio.h>


/************************************************
 * 分支语句（选择结构）
************************************************/
/* int main()
{
    int a = 0;
    int b = 1;
    int c = 1;
    if(a == 1)
    {
        if(b == 1)
        {
            printf("啊对对\n");
        }
        else {printf("不对\n");}
        //因为else与最近的if匹配，又因为第一个判断没通过所以没有输出。
    }
    if(5 == c)
    {
        printf("呵呵\n")
    }
    //写判断语句的时候把常量放在前面
    //这样如果少写一个等号，写成5 = c的时候就会报错
    //因为c没办法赋值给5，以防止写成c = 5导致判断一直通过而出现的bug。
    
    return 0;
} */

//课内练习：1写出一个数判断该数是奇数.2输出1~100的奇数。
/* int main()
{
    //1写出一个数判断该数是奇数
    int a;
    printf("请输入一个整数")
    scanf("%d", &a);
    //&符号用于获取变量的地址。在scanf（）函数中，需要传递变量的地址作为参数，以便将输入的值存储到该变量中。
    if(a % 2 == 1)//取模运算符（%）计算一个数除以另一个数的余数
    {
        printf("这个数是奇数\n");
    }
    else printf("这个数是偶数\n");


    //2输出1~100的奇数
    for(int b = 1; b<100;b += 2)
    {
        printf("%d;", b);
    }


    return 0;
} */

//switch

/* int main()
{
    int day;
    printf("今天是星期几？")
    scanf("%d", &day)
    switch(day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("今天是工作日");
            break;
//不管是输入1还是234都会直接到下一步直到五执行
        case 6:
        case 7:
            printf("今天是休息日");
            break;        
        //当前面1到7都没有进入时就执行default
        default:
            printf("输入错误");
            break;
    }
} */


//for+if

int main()
{
    int day;
    printf("今天是星期几？\n");
    scanf("%d", &day);
    for(int i = 0;i < 7;i++)
    {
        if(i == day)
        {
            printf("今天是星期%d\n", i);
        }
    }
    return 0;
}