#include <stdio.h>
int main(void)
{
    double salary, rate, tax;
    printf("��������н��");
    scanf("%lf", &salary);
    if(salary<=1600)
        rate = 0;
    else if(salary>1600&&salary<=2500)
        rate = 0.05;
    else if(salary>2500&&salary<=3500)
        rate = 0.10;
    else if(salary>3500&&salary<=4500)
        rate = 0.15;
    else
        rate = 0.20;
        
    tax = rate*(salary-1600);
    printf("Ӧ������˰��%.2lf", tax);
    return 0;
}