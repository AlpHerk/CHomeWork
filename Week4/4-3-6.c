#include <stdio.h>
float service(float);
int main(void)
{
    float x, m, m1, m2=0;
    char y;
    printf("请输入加油量(千克):");
    scanf("%f", &x);

    printf("\n汽油品种:\
    \n-A号(3.25元/千克)\
    \n-B号(3.00元/千克)\
    \n-C号(2.75元/千克)\n");
    scanf("%s", &y);
    
    switch(y)
    {
        case 'A': case 'a':
        m1=3.25;  m2=service(m2);  break; 
        case 'B': case 'b':
        m1=3.00;  m2=service(m2);  break;
        case 'C': case 'c':
        m1=2.75;  m2=service(m2);  break;
        
    }
    m =x*m1-x*m1*m2;
    printf("\n\n---需支付金额:%.2f", m);
    return 0;
}

float service(float m2)
{
    char z;
    printf("\n服务类型:\
            \n-N型(不需要服务)\
            \n-M型(自己加)\
            \n-E型(协助加)\n");
    scanf("%s", &z);
    switch(z)
    {
        case 'N': case 'n':
        m2=0; break;
        case 'M': case 'm':
        m2=0.05; break;
        case 'E': case 'e':
        m2=0.10; break;
    }
    return m2;
}