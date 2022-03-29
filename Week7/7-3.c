#include <stdio.h>
int isShuixian(int n);
int main(void)
{
    int n;
    int c = 0;
    for(n=100; n<1000; n++)
    {
        if(isShuixian(n) == 1)
        {   
            printf("%d\t", n);
            c++;
            if(c%5==0)
                printf("\n");
        }
    }
    return 0;
}

int isShuixian(int n)
{
    int i, j, k;
    i=n/100;
    j=n/10-i*10;
    k=n%10;
    if (n==i*i*i + j*j*j + k*k*k)
        return 1;
    else
        return 0;
}