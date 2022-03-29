#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("————说明：此程序用于计算 |x|+|y| 的值————\n\n");
    
    double x, y, absolute;
    printf("请输入 x, y 的值： ");
    scanf("%lf %lf", &x, &y);

    absolute = abs(x) + abs(y);
    printf("|x|+|y|= %lf",absolute);

    return 0;
}