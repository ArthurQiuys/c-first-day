 ///
 /// @file    bool.cc
 /// @Arthur  lemon(qiuyuanshun@yeah.net)
 /// @date    2016-02-25 15:13:21
 ///黑云压城城欲摧，甲光向日金鳞开。
 ///角声满天秋色里，塞上燕脂凝夜紫。
 ///半卷红旗临易水，霜重鼓寒声不起。
 ///报君黄金台上意，提携玉龙为君死。
 ///
#include <iostream>
int fcuna(int *pa)
{
    return *pa;
}

int main(int argc, const char *argv[])
{
    int a =3;
    
    // double b1 = double(a);
    double b1 = (double)a;//C的写法（强制转换）
    double d2 =static_cast<double>(a);//c++的强制转换类型关键字
            //coust_cast dynamic cast reinterpret_cast
    
    std::cout << "b1 = "<< b1 << std::endl;
    std::cout << "d2 = "<< d2 << std::endl;
   
    const int b = 10;
    int *pc = const_cast <int *>(&b);
    std::cout << "*pc = "<< *pc << std::endl;
    std::cout << "b = "<< b << std::endl;
 
    //fcuna(c);
    fcuna(const_cast<int*>(&b));
    return 0;

}
