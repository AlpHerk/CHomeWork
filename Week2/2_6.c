#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("����������ѧ���ķ�����\n");
    scanf("%d,%d,%d", &a, &b, &c);

    float sum, average;
    sum = a+b+c;
    average = sum/3;
    printf("�ܳɼ� = %.2f ,\t ƽ���ɼ� = %.2f", sum, average);

    return 0;
}