#include <stdio.h>
int huiwen(int);

int main(void)
{
    int i, j=0;
    for(i=10; i<200; i++)
    {
        if(huiwen(i) == 1)
        {
            printf("%d\t", i);
            j++;
            if(j%5==0)
                printf("\n");
        }
    }
    return 0;
}

int huiwen(int n)
{
    int i, j, k;
    if(n>10 && n<100)
    {
        i = n/10;
        j = n%10;
        if( j*10+i == n)
            return 1;
    }
    if(n>100 && n<200)
    {
        i = n/100;
        j = n/10%10;
        k = n%10;
        if( k*100+j*10+i == n)
            return 1;
    }
}
