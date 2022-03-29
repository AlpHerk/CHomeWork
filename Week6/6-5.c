#include <stdio.h>
int main(void)
{
    int n;
    double term=0, sum=0;
    int fz=2, fm=1;
    printf("输入 n ：");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    { 
        term = (double)fz/fm;
        sum +=term;
        fz = fz + fm;
        fm = fz - fm;
        
    }  
    printf("sum = %lf", sum);
    return 0;
}