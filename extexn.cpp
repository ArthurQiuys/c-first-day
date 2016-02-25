 ///
 /// @file    overload.cc
 /// @Arthur  lemon(qiuyuanshun@yeah.net)
 /// @date    2016-02-25 15:29:48
 ///黑云压城城欲摧，甲光向日金鳞开。
 ///角声满天秋色里，塞上燕脂凝夜紫。
 ///半卷红旗临易水，霜重鼓寒声不起。
 ///报君黄金台上意，提携玉龙为君死。
 ///
#include <iostream>
//c++ 支持函数重载，其实现原理是：名字改编（name managling)
//同名函数根据其参数的类型，个数，顺序进行改编
extern "C"//提供了一种以C为编译方式的定义
{
int add (int a,int b = 0 )//缺省参数/默认参数
{
    return a + b;
}
}
int add (int a, int b , int c)
{
    return a + b + c;
}
int add (double a , double b )
{
    return a + b;
}

int add (double a , int  b )
{
    return a + b;
}
int main(void)
{
    int a = 3, b = 4 , c = 5;
    std::cout << " a + b ="<< add( a, b) << std::endl;
    std::cout << " a + b + c = "<< add( a , b , c) << std::endl;
}

