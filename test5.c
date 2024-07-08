//自增，自减运算的使用
//++i 先自增再运算
//i++ 先运算再自增
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    a=100;
    b=99;
    c=++a;
    d=b++;
    printf("%d\n",c);
    printf("%d\n",d);
    return 0;
}