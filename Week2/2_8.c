#include <stdio.h>
#include <math.h>
int main(void)
{
    printf("��������˵�����˳������ڼ��� |x|+|y| ��ֵ��������\n\n");
    
    double x, y, absolute;
    printf("������ x, y ��ֵ�� ");
    scanf("%lf %lf", &x, &y);

    absolute = abs(x) + abs(y);
    printf("|x|+|y|= %lf",absolute);

    return 0;
}