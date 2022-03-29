#include <stdio.h>
int main(void)
{
    int i=1, n=1;
    double e=1;
    while( 1.0/n>10e-7 )
    {
        n = i*n;
        e += 1.0/n;
        i++;
    }
    printf("e=%lf", e);
    return 0;
}