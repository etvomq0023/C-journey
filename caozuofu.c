#include <stdio.h>
#include <stdlib.h>
//操作符
//算数操作符  + - * % /
//移位操作符  >>  <<
int main()
{
    //float a = 9 / 2.0;//4.50000
    //printf("%f\n", a);
    //int a = 9 % 2;  //% -取模（余）
    //printf("%d\n", a);
    //int a = 2;
    //int b = a << 1;//左移操作符--移动的是二进制位
    //00000000 00000000 00000000 00000010 2
    //00000000 00000000 00000000 00000100 4
    //printf("%d\n", b);
//位操作符：
    //& 按位与
    //|按位或
    //^按位异或
//赋值操作符
    //  =
    //  +=
    //  -=
    //  *=
    //  /=
    //  &=
    //  ^=
    //  |=
    //  >>=
    //  <<=

    //int a = 2;
    //a = a + 5;
    //a += 5;

    //a = a - 3;
    //a -= 3;

    //a = a % 3;
    //a %= 3;

// a + b;  + 有2个操作数，双目操作符
    // 单目操作符：  只有一个操作数

    // ! 逻辑反操作符

     // 0 表示假，非0表示真
    //真变假 假变真
    //int a = 0;
    //printf("%d\n", !a);//1 就为真

    //if (a)
    //{
        //如果a 为真，做事
    //}
    ///if (!a)
    //{
        //如果a为假，做事
    //}


    // - 负值
    //a = -5;
    //a = -a;

    // + 正值
    // &取地址

    // sizeof 操作数的类型长度（以字节为单位）
    //sizeof 是一个操作符 
    //不是函数
    // 计算类型或者变量的大小的
    //int a = 10;
    //printf("%d\n", sizeof(int));
    //printf("%d\n", sizeof(a));

    //10*4 = 40
    int arr[10] = {0};
    printf("%d\n", sizeof(arr));//计算数组的总大小，单位是字节
    printf("%d\n", sizeof(arr[0]));//4
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);

    // ~ 对一个数的二进制按位取反
    // -- 前置，后置 --‘
    // ++ 前置，后置 ++
    // * 间接访问操作符（解引用操作符）
    

   

    

    
    system("pause");
    return 0;
}