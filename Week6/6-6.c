#include <stdio.h>
int main(void)
{
    int j=0;
    for(int i=1; i<100; i++)
    {
        if (i%7==0 || i%9==0 || i%11==0)
        {
            printf("%d\t", i);
            j++;
            if(j%5==0) printf("\n");
        }
    }
    return 0;
}