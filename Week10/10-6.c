#include <stdio.h>
int main()
{
    int a[10] = {0,-1,2,-3,4,-5,6,-7,8};
    int *p = a;
    int all=0, posi=0, nega=0, sum=0;
    for (int i=0; i<10; i++)
    {
        if (p[i]!='\0')
        {
            all++;
            if (p[i]>0)
                posi++;
            if (p[i]<0)
                nega++;
            sum +=p[i];
        }
    }
    printf("all=%d, posi=%d, nega=%d, sum=%d", 
                        all, posi, nega, sum);
    return 0;
}