#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int r, n, flag, sum;
    r = rand()%100+1;
    for(sum=1; ; sum++)
    {
        printf("请输入猜测的数字：");
        scanf("%d", &n);
        if( n < r )   printf("猜小了，还需努力呀！");
        else if (n>r) printf("猜大了，继续加油啊！");
        else 
        {
            printf("猜对啦！");
            break;
        }
        if(sum>=3)
        {
            printf("三次结束，你没有猜对，很遗憾！");
            break;
        }
    }
    return 0;
}