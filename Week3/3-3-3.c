#include <stdio.h>
int max(int a, int b, int c);
int main(void)
{
    int a, b, c;
    printf("��������������(�ո����)��");
    scanf("%d %d %d", &a,&b,&c);
    printf("��������������: %d", max(a,b,c));
    return 0;
}

int max(int a, int b, int c)
{
    int max;
    max = a>b?a:b;
    max = c>max?c:max;
    return max;
}