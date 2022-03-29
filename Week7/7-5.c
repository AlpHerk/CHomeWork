#include <stdio.h>
int runnian(int year)
{
    if( (year%4==0 && year%100!=0) || year%400==0 )
        return 1;  
}

int main(void)
{
    int count = 0;
    for(int year=1900; year<2001; year++)
    {
        if(runnian(year) == 1)
        {
            printf("%d\t", year);
            count++;
            if(count%5 == 0)
                printf("\n");
        }
    }
    return 0;
}