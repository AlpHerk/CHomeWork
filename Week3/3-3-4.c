#include <stdio.h>
int main(void)
{
    double speed;
    printf("请输入检测到的速度(单位mph)：");
    scanf("%lf", &speed);
    if(speed>=60)
        printf("超速");
    else
        printf("正常");
    return 0;
}