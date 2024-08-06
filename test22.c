// 奇偶 ASCII 值判断 https://www.luogu.com.cn/problem/B2038
#include <stdio.h>
int main()
{
    int a;
    printf("请输入一个字母:\n");
    a=getchar();
    if(a%2!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}