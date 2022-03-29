#include <stdio.h>
int main(void)
{
    float d, fee;
    int t;
    printf("请输入行驶里程(精确到0.1km)与等待时间(分钟)：");
    scanf("%f %d", &d, &t);

    if(d<3)
        fee = 10;
    else if(d>=3&&d<=10)
        fee = 10+(d-3)*2;
    else
        fee = 10+7*2+(d-10)*2*1.5;

    int fee_int;
    fee_int = (fee+t/5*2) + 0.5;
    printf("乘客需支付(元)：%d", fee_int);
    
    return 0;
}