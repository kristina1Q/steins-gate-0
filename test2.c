#include<stdio.h>
double calculate(int height, int radius);
int main()
{
    int cheight = 0;
    int cradius = 0;
    double sum = 0.0;
    printf("请输入x:\n");
    scanf("%d",&cheight);
    printf("请输入y:\n");
    scanf("%d",&cradius);
    sum = calculate(cheight ,cradius);
    printf("x+y等于:%f\n",sum);
    return 0;
}
double calculate(int height ,int radius)
{
    double result =height + radius;
    return result;
}