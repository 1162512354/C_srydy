#include<stdio.h>
#include<stdbool.h>





// 指针在自定义函数中的使用

/* int exc1(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

// 如果这样写的话只是改变了x和y的值并没有改变a和b的值

int exc2(int* x, int* y)
{
    int z = 0;
    z = *x;
    *x = *y;
    *y = z;
}
//这样子直接对目标地址进行修改

int main()
{
    int a = 10;
    int b = 20;

    printf("%d;%d\n", a, b);
    //当我想要写一个函数将两个值交换时：
    //exc1(a, b);//调用函数后发现ab没有进行交换
    exc2(&a, &b);//获取a和b的地址
    printf("%d;%d\n", a, b);

    return 0;
} */


// 函数的参数
// 实参和形参
// 实参：实际参数，就是常量、变量、表达式等，上面的a，b，&a，&b就是实参

// 形参:形式参数，就是函数括号内的参数，只在调用的时候才会实例化（分配内存单元）
// 上面的x和y都是形参.

//形参是实参的临时拷贝，形参是不会改变实参的

// 练习1写一个函数判断一个数是不是素数

// 千万不要在这个函数里面打印
/* bool pn(int a)//bool返回值为true和false分别为真和假
{
    int i = 0;
    if(a <= 1)
    {
        return false;
    }
    else;
    for(i = 2;i < a;i++)
    {
        if(a % i == 0)
        {
            return false;
        }
        else;
    }
    return true;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    if(pn(a))
    {
        printf("是素数\n");
    }
    else
    {
        printf("不是素数\n");
    }
    return 0;
} */


//练习2、写一个函数实现整形有序数组的二分法查找。
int eff(int arr[], int x, int sr)
{
    int l = 0;
    int r = sr;
    int i = 0;
    // while(l <= r)
    // {
    //     i = (r+l)/2;
    //     if(arr[i] < x)
    //     {
    //         l = i+1;
    //     }
    //     else if(arr[i] > x)
    //     {
    //         r = i-1;
    //     }
    //     else
    //     {
    //         return i;
    //     }
    // }

    for(int i = (r+l)/2; l <= r; i = (r+l)/2)
    {
        if(arr[i] < x)
        {
            l = i+1;
        }
        else if(arr[i] > x)
        {
            r = i-1;
        }
        else
        {
            return i;
        }
    }
    return -1;
} 

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11, 12};
    int x;
    int s_arr = sizeof(arr)/sizeof(arr[0]);
    scanf("%d", &x);

    if(eff(arr, x, s_arr) == -1)
    {
        printf("找不到\n");
    }
    else
    {
        printf("下标是%d,数值为%d", eff(arr, x, s_arr), arr[eff(arr, x, s_arr)]);
    }
    return 0;
}