#include <stdio.h>
int main(void)
{
    int sign=-1;
    double sum=0;
    for(int n=1; n<101; n++)
    {
        sign = -1*sign;
        sum += (1.0/n)*sign;
    }
    printf("%lf",sum);
    return 0;
}