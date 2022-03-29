#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, a;
    double y;
    printf("ÇëÊäÈëÕûÊı x : ");
    scanf("%d", &x);
    if (x<2)     a=0;
    else a=x/2;
    switch(a)
    {
        case 0:  y=x; break;
        case 1:case 2:  y=x*x; break;
        case 3:case 4:  y=sqrt(x+1); break;
        default: y=1.0/(x+1);
    }
    printf("x=%d , y=%.2lf", x, y);
    return 0;
    
}