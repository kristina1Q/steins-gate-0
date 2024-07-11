/*优先级与结合性：逻辑非“！”>算数运算符>关系运算符>“&&”和“||”>赋值运算符*/
#include <stdio.h>
int main()
{
    int year;
    printf("请输入一个年份：");
    scanf("%d",&year);
    if (year%4==0&&year%100!=0||year%400==0)
    {
        printf("%d是闰年\n",year);
    }
    else
    {
        printf("%d不是闰年\n",year);
    }
    return 0;
}