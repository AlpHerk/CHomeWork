#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y;
    printf("————说明：此程序用于计算 y= x^4 + 3x^3 - 2x 的函数值————\n\n");
    printf("请输入 x(x∈Z) 的值：");
    scanf("%d", &x);
   
    y = pow(x,4) + 3*pow(x,3) - 2*x ;
    printf("当 x=%d 时，y=%d", x, y);
    
    return 0;
}