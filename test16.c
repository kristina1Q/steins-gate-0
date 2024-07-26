//https://www.luogu.com.cn/problem/B3825  降雨量
#include <stdio.h>
int main()
{
    int rain;
    printf("请输入降雨量:");
    scanf("%d",&rain);
    if(rain<10)
    {
        printf("小雨");
    }
    else if(rain>10&&rain<25)
    {
        printf("中雨");
    }
    else if(rain>25&&rain<50)
    {
        printf("大雨");
    }
    else if(rain>=50)
    {
        printf("暴雨");
    }
    return 0;
}
