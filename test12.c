//getchar()会读入回车符，所以需要再次调用吞掉回车符
#include <stdio.h>
int main()
{
    char ch;
    ch = getchar();
    putchar(ch);
    putchar('\n');
    getchar();
    putchar(getchar());
    putchar('\n');
    return 0;
}