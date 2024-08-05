//分苹果   https://www.luogu.com.cn/problem/B2072
//本质为等差数列
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入小朋友的人数:");
    scanf("%d",&a);
    b=1,c=0;
    while(b<=a)
    {
     c+=b;
     b++;
    }
    printf("最少的苹果数为:%d",c);
    return 0;
}