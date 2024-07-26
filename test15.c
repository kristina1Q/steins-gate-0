//2个数比大小  https://www.luogu.com.cn/problem/B3649
//if 语句的使用
#include <stdio.h>
int main()
{
    int x=0,y=0;
    printf("输入x,y的值:\n");
    scanf("%d%d",&x,&y);
    if(x>y)
    {
    printf("x的值为:%d",x);
    }
    else if((x-y)<0&&(x-y)>-10)
    {
        printf("congratulation");
    }
    else
    {
    printf("y的值为:%d",y);
    }
    return 0;
}