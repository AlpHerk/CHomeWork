#include <stdio.h>
int main(void)
{
    int a[10] = {0};
    int sum_od = 0, sum_ev = 0;
    int i;
    for(i = 0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i<10; i++)
    {
        if(a[i]%2 == 1) sum_od+=a[i];
        else sum_ev+=a[i];
    }

    printf("奇数和为：%d    偶数和为：%d", sum_od, sum_ev);
    return 0;
}
