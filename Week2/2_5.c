#include <stdio.h>
int main(void)
{
    double rate, capital, deposit;
    int n;

    printf("�����������ʣ�");
    scanf("%lf", &rate);
    printf("��������������");
    scanf("%d", &n);
    printf("�����뱾��");
    scanf("%lf", &capital);

    deposit = capital*rate/100*n;
    printf("\n�������Ϣ�ĺ��ǣ�%.6lf", deposit);
    
    return 0;
}