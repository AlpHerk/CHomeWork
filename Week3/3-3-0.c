#include <stdio.h>
int main(void)
{
	double x, y;
    scanf("%lf", &x);
    if(x<=2.5){
        y=1.5*x+7.5;
        printf("y=%.2lf", y);
    }
    else{
        y=9.32*x-34.2;
        printf("y=%.2lf", y);
    }
    return 0;
}