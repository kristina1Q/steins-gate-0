#include<stdio.h>
#define PI 3.14
double calculateVolume(int height, int radius);
int main()
{
    int cHeight = 0;
    int cRadius = 0;
    double volume = 0.0;
    printf("请输入圆柱体的高度:\n");
    scanf("%d",&cHeight);
    printf("请输入圆柱体的半径:\n");
    scanf("%d",&cRadius);
    volume = calculateVolume(cHeight ,cRadius);
    printf("圆柱体的体积是:%f\n",volume);
    return 0;
}
double calculateVolume(int height ,int radius)
{
    double result = height*PI*radius*radius;
    return result;
}