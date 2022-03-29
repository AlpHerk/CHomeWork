#include <stdio.h>

int main()
{
    int a[100] = {0};
    int *p = a;
    int i = 0;
    float average = 0;
    for (i=0;i<100; i++)
    {
        scanf("%d", &a[i]);
        if ( a[i] == 0 )
            break;
    }

    int cnts=0;
    for (i=0; i<100; i++)
    {
        if (a[i]>0)
        {
            average += a[i];
            cnts++;
        }
    }
    average = average/cnts;
    printf("%f", average);
    return 0;
}