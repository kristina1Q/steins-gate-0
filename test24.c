// 计算 2 的幂 https://www.luogu.com.cn/problem/B2034
#include <stdio.h>
int main()
{
    int a,b,c;
    b=1,c=1;
    printf("请输入幂的数:\n");
    scanf("%d",&a);
    while(b<=a)
    {
     c*=2;
     b++;
    }
    printf("2的%d次幂是:%d",a,c);
    return 0;
}