 ///
 /// @file    string.cpp
 /// @Arthur  lemon(qiuyuanshun@yeah.net)
 /// @date    2016-02-25 16:14:07
 ///黑云压城城欲摧，甲光向日金鳞开。
 ///角声满天秋色里，塞上燕脂凝夜紫。
 ///半卷红旗临易水，霜重鼓寒声不起。
 ///报君黄金台上意，提携玉龙为君死。
 ///
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char  strarr[]=("hello,world");
    char arr2[100] = ("shenzhen");

    strcat( arr2, strarr);
    
    printf("%s\n",arr2);
    
    char * pstr = (char *)malloc(strlen(strarr)+strlen(arr2)+1);
    strcpy(pstr, strarr);
    strcat(pstr, arr2);
    printf("%s\n",pstr);
    free(pstr);
    pstr = NULL;

    return 0;
}
