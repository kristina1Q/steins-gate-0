// 反向输出一个三位数 https://www.luogu.com.cn/problem/B2028
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("请输入一个三位数:\n");
    scanf("%d",&a);
    b=a/100;
    c=a%100/10;
    d=a%10;
    e=b+c*10+d*100;
    printf("反向输出的三位数是:%d\n",e);
    return 0;
}