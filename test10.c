//逗号运算符优先级最低,n个逗号表达式输出的值为最后一个表达式的值
#include <stdio.h>
int main()
{
    int x,y,z,result;
    x=4;
    y=10;
    z =5;
    result=x+y,y-z,x+y+z;//赋值优先于逗号表达式，result值为x+y
    printf("the result is:%d\n",result);
    result=(x+y,y-z,x+y+z);
    printf("the result is:%d\n",result);
    return 0;
}