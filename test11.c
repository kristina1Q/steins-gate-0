//a+=10  等价于a=a+10
#include <stdio.h>
int main()
{
    int ch=10;
    int a=5;
    a+=ch;
    printf("a=:%d",a);
    return 0;
}