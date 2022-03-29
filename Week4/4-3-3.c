#include <stdio.h>
int main(void)
{
    int a, g;
    char s;
    printf("请输入百分制分数:");
    scanf("%d", &g);
    a = g/10;
    switch(a)
    {
        case 9:case 10: s='A'; break;
        case 8: s='B'; break;
        case 7: s='C'; break;
        case 6: s='D'; break;
        default:s='E';
    }
    printf("转化为五分制为:%c", s);
    return 0;
}