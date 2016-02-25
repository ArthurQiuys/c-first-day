 ///
 /// @file    string1.cpp
 /// @Arthur  lemon(qiuyuanshun@yeah.net)
 /// @date    2016-02-25 16:30:21
 ///黑云压城城欲摧，甲光向日金鳞开。
 ///角声满天秋色里，塞上燕脂凝夜紫。
 ///半卷红旗临易水，霜重鼓寒声不起。
 ///报君黄金台上意，提携玉龙为君死。
 ///
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using std::string;

int main (void)
{
    string str1 ="hello world";
    string str2 ="shenzhen";

    str1 += str2;
    std::cout << str1 << std::endl;
    return(0); 
}
