//B2076 球弹跳高度的计算 https://www.luogu.com.cn/problem/B2076
#include <stdio.h>
int main()
{
    float a,b;
    printf("请输入球的初始高度:");
    scanf("%f",&a);
    b=1;
    for(b=1;b<=10;b++)
    {
        a/=2;
    }
    printf("10次后的高度为:%f",a);
    return 0;
}
