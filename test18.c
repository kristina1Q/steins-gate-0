//斐波那契数列 https://www.luogu.com.cn/problem/B2064
#include <stdio.h>
int main()
{
    long long a,b,c,d,e; 
    printf("请输入项数:");
    scanf("%d",&a);
    e=a;
    if(a==1)
    {
        printf("1");
    }
    else
    {
        a=a/2;
        for(b=1,c=0,d=1;b<=a;b++)
    {
     c+=d;
     d+=c;
    }
    if(e%2==0)
    {
        printf("%lld",c);
    }
    else
    {
        printf("%lld",d);
    }
    }
    return 0;
}
