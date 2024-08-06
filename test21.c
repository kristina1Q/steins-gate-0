// 最大数输出 https://www.luogu.com.cn/problem/B2049
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入3个数的值:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%d为最大数",a);
    }
    else if(b>a&&b>c)
    {
        printf("%d为最大数",b);
    }
    else if(c>a&&c>b)
    {
        printf("%d为最大数",c);
    }
    return 0;
}