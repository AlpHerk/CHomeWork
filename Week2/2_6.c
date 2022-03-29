#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("请输入三个学生的分数：\n");
    scanf("%d,%d,%d", &a, &b, &c);

    float sum, average;
    sum = a+b+c;
    average = sum/3;
    printf("总成绩 = %.2f ,\t 平均成绩 = %.2f", sum, average);

    return 0;
}