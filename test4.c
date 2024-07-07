#include<stdio.h>
int main()
{
    int value,count,price;
    printf("请输入商品的价格：");
    scanf("%d",&price);
    printf("请输入商品的数量：");
    scanf("%d",&count);
    value =count*price;
    printf("商品的价值为：%d\n",value);
    return 0;
}