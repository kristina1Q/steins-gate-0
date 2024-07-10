#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入a的值：");
    scanf("%d",&a);
    printf("请输入b的值：");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d is bigger than %d\n",a,b);
    }
    if (a<b)
    {
        printf("%d is smaller than %d\n",a,b);
    }
    if (a==b)
    {
        printf("%d is equal to  %d\n",a,b);
    }
    
    return 0;
}