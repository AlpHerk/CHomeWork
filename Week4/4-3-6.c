#include <stdio.h>
float service(float);
int main(void)
{
    float x, m, m1, m2=0;
    char y;
    printf("�����������(ǧ��):");
    scanf("%f", &x);

    printf("\n����Ʒ��:\
    \n-A��(3.25Ԫ/ǧ��)\
    \n-B��(3.00Ԫ/ǧ��)\
    \n-C��(2.75Ԫ/ǧ��)\n");
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
    printf("\n\n---��֧�����:%.2f", m);
    return 0;
}

float service(float m2)
{
    char z;
    printf("\n��������:\
            \n-N��(����Ҫ����)\
            \n-M��(�Լ���)\
            \n-E��(Э����)\n");
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