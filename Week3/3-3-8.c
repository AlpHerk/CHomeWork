#include <stdio.h>
int main(void)
{
    int year;
    printf("判断年份是否为闰年，请输入一个年份：");
    scanf("%d", &year);
    if((year%4==0&&year%100!=0)||year%400==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}