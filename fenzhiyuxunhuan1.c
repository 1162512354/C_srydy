#include<stdio.h>
#include<string.h>
#include<windows.h>//slepp函数必需头文件，slepp用于时延
#include<stdlib.h>//system()执行系统命令函数必需头文件
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

/* int main()
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
} */



//while

//break表示跳出循环，continue表示跳过这次循环，到下一次循环
//for中碰到continue时就会到调整的那一步
//例如：for（int i = 0; i < 10; i++）如果遇到continue就会直接执行i++然后到下一次循环

/* int main()
{
//    int ch = 0;
//    //EOF - end of file 文件结束标志
//    while((ch = getchar()) != EOF)//getchar用于接收字符,键入（CTRL+Z）时就会获取到一个EOF
//    //关系运算符（！=）的优先级比赋值（=）的优先级高
//    //所以要加入一个括号
//    {
//        putchar(ch);
//    }

    char arr[20] = {0};
    int qr;
    int* q = &qr;
    printf("请输入密码:");
    scanf("%s", &arr);
    //这时候输入缓冲区有输入的密码和键入回车键\n的换行符
    //scanf只读走了密码还剩下\n
    while((qr = getchar() != '\n'));
    //为了防止碰到空格等符号比如说输入密码时：
    //123456 asdf
    //再用getchar读取,一直读取到回车键\n
    printf("请确认,Y/N:");
    qr = getchar();
    if(qr == 'Y')
    {
        printf("确认成功");
    }
    else printf("确认失败");


    return 0;
} */

/* int main()
{
    int ch;//因为getchar返回值是int类型，返回的是ASKII码
    while((ch = getchar()) != EOF)
    {
        if(ch < '0' || ch > '9')//不是数字的情况
        {
            continue;//跳过这次循环到下一次循环            
        }
        putchar(ch);//打印出输入的数字



    }
} */


//for
//for中碰到continue时就会到调整的那一步
//例如：for（int i = 0; i < 10; i++）如果遇到continue就会直接执行i++然后到下一次循环

//for的循环控制变量的取值采用“前闭后开区间”写法。

/* int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    for(i = 0; i < 10; i++)//左边是=0，右边是<10，如果是<=9就是两边都是闭区间。
    {
        printf("%d", arr[i]);
    }
    return 0;
} */


//一些for循环的变种

//变种1
/* int main()
{
    for(; ; )//for循环的初始化，判断，调整都可以省略，
    //这里判断省略后变成恒为真
    {
        printf("liangzai");
    }
    return 0;
} */

//变种2

/* int main()
{
    int x, y;
    for(x = 0, y = 0; x<2 && y<5; ++x, y++)
    {
        printf("%d;%d\n", x, y);
    }
    return 0;
} */

//for笔试题:一下循环要循环几次
/* int main()
{
    int j = 0;
    int k = 0;
    for(j = 0, k = 0; k = 0; i++,k++)
    //‘=’是赋值语句，因为赋值为0，0为假，所以压根不进行循环,如果赋值非0的值就是死循环。
    {
        k++;
    }
    return 0;
} */


//练习1.n的阶乘
/* int main()
{
    int n, m, i = 1;
    scanf("%d", &n);
    for(m = 1;i <= n; i++)
    {
        m *= i;
        printf("%d; ", m);
    }
    return 0;
} */

//练习2、1！+2！+3！+....+10！
/* int main()
{
    int arr = 1;
    int num = 0;
    for(int i = 1; i <= 10; i++)
    {
        //arr = 1;
        // for(int j = 1; j<=i; j++)
        // {
             arr *= i;
        // }
        num += arr;
    }
    printf("num = %d\n", num);
    return 0;
} */

//练习3在一个有序数组中查找具体的某个数字n。
//编写int binsearch(int x, int v[], int n);
//功能︰在v[0]<=v[1]<=v[2]<= ....<=v[n-1]的数组中查找x.
//添加额外功能：数组排序
/* 
int arr_sort(int arr[])//排序
{
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        for(int j = i; j < (sizeof(arr)/sizeof(arr[0])); j++)
        {
            if(arr[j] < arr[j+1])
            {
                int a = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = a;
            }
        }
    }
}


 int binsearch(int x, int v[], int n)//查找，历遍法
{
    for(int i = 0; i < n; i++)
    {
        if(x == v[i])
        {
            printf("x = v[%d] =%d\n", i, v[i]);
            break;
        }
    }
}
 

int binsearch(int x, int v[], int n)//查找，二分法
{
    int l = 0;//l是左边
    int r = n-1;//r是右边
    while(l <= r)//防止范围反过来
    {
        int i =(l+r)/2;
        if(x < v[i])
        {
            r = i-1;
        }
        else if(v[i] > x)
        {
            l = i+1;
        }
        else
        {
            printf("x = v[(%d] = %d", i, v[i]);
            break;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int s_arr = (sizeof(arr)/sizeof(arr[0]));
    // for(int i = 0; i<s_arr; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    binsearch(2, arr, (sizeof(arr)/sizeof(arr[0])));


    return 0;
}
 */


//练习4、演示多个字符从两端移动。向中间汇聚

/* int main()
{
    char a[] = {"liangzai"};
    char b[] = {"#########"};
    int r = (sizeof(a)/sizeof(a[0]))-1;
    int l = 0;
    while(l <= r)
    {
        b[l] = a[l];
        b[r] = a[r-1];
        printf("%s\n", b);
        Sleep(1000);//时延函数，1000=一秒
        system("cls");//执行系统命令；cls-清空屏幕
        l++;
        r--;
    }
    return 0;
} */


// 练习五、编写代码实现，模拟用户登录情景，并且只能登录三次。
// (只允许输入三次密码，如果密码正确则提示登录成，
// 如果三次均输入错误，则退出程序。

int main()
{
    int i;
    char p[11] = {0};
    printf("请设置一个十位数以内的密码\n");
    scanf("%s", &p);
    printf("设置成功\n");
    printf("你要登录系统吗Y/N\n");
    getchar();
    int yn = getchar();
    if(yn == 'y' || yn == 'Y')
    {
        for(i = 0;i < 3; i++)
        {
            char p1[11] = {0};
            printf("请输入密码：");
            scanf("%s", &p1);
            // ‘==’不能用来比较两个字符串是否相等
            // 应该使用应该库函数 -- strcmp
            if(strcmp(p, p1) == 0)//两个字符串返回结果为0就说明他们相等
            {
                printf("登录成功\n");
                break;
            }
            else
            {
                printf("密码错误\n");
            }
        }
        if(i == 3)
        {
            printf("登录失败\n");
        }
        else;
    }
    else if(yn == 'n' || yn == 'N')
    {
        printf("取消登录\n");
    }
    else
    {
        printf("请输入Y或N,不区分大小写\n");
    }

}