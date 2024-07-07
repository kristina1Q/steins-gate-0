//#include <stdio.h>
//  int main()
//  {
//    float am = 1.25;
//    float an = 4;
//    char ab = 'a';
//    char ac = 'A';
//    double value = am * an + ab - ac;
//    printf("值为：%d", value);
//    return 0;
//  }

#include <stdio.h>
void value()
{
    static int abc= 10;
    abc=abc*10;
    printf("输出的值为：%d\n",abc);
}
int main()
{
    printf("第一次调用：");
    value();
    printf("第二次调用：");
    value();
    printf("第三次调用：");
    value();
    return 0;
}