#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y;
    printf("��������˵�����˳������ڼ��� y= x^4 + 3x^3 - 2x �ĺ���ֵ��������\n\n");
    printf("������ x(x��Z) ��ֵ��");
    scanf("%d", &x);
   
    y = pow(x,4) + 3*pow(x,3) - 2*x ;
    printf("�� x=%d ʱ��y=%d", x, y);
    
    return 0;
}