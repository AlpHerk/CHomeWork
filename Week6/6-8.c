#include <stdio.h>
#include <math.h>
int main(void)
{
    int flag=0, j=0;
    for(int n=3; n<200; n++)
    {
        for(int i=2; i<=sqrt(n)+1; i++)
        {
            
            if(n%i==0) 
            {
                flag=0;
                break;
            }
            else flag=1;
            
        }
        if(flag==1)
        {
            printf("%d\t",n);
            j++;
            if(j%5==0)  printf("\n");
        }
    }
    return 0;
}