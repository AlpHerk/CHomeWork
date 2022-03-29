#include <stdio.h>
int main(void)
{
    int n;
    printf("想知道你第n天是打鱼还是晒网？请输入这个数字: ");
    scanf("%d", &n);
    if(n%5>=3)
        printf("晒网");
    else
        printf("打鱼");
    return 0;
}
