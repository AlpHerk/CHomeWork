#include <stdio.h>
int main(void)
{
    int year;
    printf("�ж�����Ƿ�Ϊ���꣬������һ����ݣ�");
    scanf("%d", &year);
    if((year%4==0&&year%100!=0)||year%400==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}