#include <stdio.h>
int main(void)
{
    double income, taxes;
    int a;
    scanf("%lf", &income);
    a=income/400;
    switch(a)
    {
        case 0: case 1: taxes=0;                  break;
        case 2:  taxes=(income-800)*0.05;         break;
        case 3: case 4: taxes=(income-1200)*0.08; break;
        default: taxes=(income-2000)*0.2;         break;
    }

    printf("税费为:%.2lf", taxes);
    return 0;
}