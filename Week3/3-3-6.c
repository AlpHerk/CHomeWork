#include <stdio.h>
int main(void)
{
    float d, fee;
    int t;
    printf("��������ʻ���(��ȷ��0.1km)��ȴ�ʱ��(����)��");
    scanf("%f %d", &d, &t);

    if(d<3)
        fee = 10;
    else if(d>=3&&d<=10)
        fee = 10+(d-3)*2;
    else
        fee = 10+7*2+(d-10)*2*1.5;

    int fee_int;
    fee_int = (fee+t/5*2) + 0.5;
    printf("�˿���֧��(Ԫ)��%d", fee_int);
    
    return 0;
}