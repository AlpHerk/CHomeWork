#include <stdio.h>
int main(void)
{
    double rate, capital, deposit;
    int n;

    printf("请输入年利率：");
    scanf("%lf", &rate);
    printf("请输入存款年数：");
    scanf("%d", &n);
    printf("请输入本金：");
    scanf("%lf", &capital);

    deposit = capital*rate/100*n;
    printf("\n本金和利息的和是：%.6lf", deposit);
    
    return 0;
}