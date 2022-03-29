#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, n;
    int b=0, s=0;
    printf("请输入 a(0~9) 与 n(正整数) ：");
    scanf("%d%d", &a, &n);
    for(int i=0; i<n; i++)
    {
        b = b*10 + a;
        s += b;
    }
    printf("s=%d+%d%d+%d%d%d+...=%d", a, a,a, a,a,a, s);
    return 0;
}