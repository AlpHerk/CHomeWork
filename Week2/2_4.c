#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, s, area;
    printf("????????????????????\n");
    
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("a= %.2lf  b= %.2lf  c= %.2lf\n", a, b, c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("??????%.2lf  ??????%.2lf\n", s, area);
    
    return 0;
}