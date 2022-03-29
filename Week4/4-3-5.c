#include <stdio.h>
int main(void)
{
    float prices;
    int a, b, amounts;
    printf("\n__________学校小卖部__________");
    printf("\n\n\n1.日用品   2.文具   3.食品"
    "\n-请选择商品类别: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        printf("\n1.牙刷(3.5元/支)   2.牙膏(9.5/支)   3.肥皂(5.0/支)");
        printf("\n-请选择商品:");
        scanf("%d", &b);
        printf("-请输入数量:");
        scanf("%d", &amounts);
        switch(b){
            case 1: prices=amounts*3.5; break;
            case 2: prices=amounts*9.5; break;
            case 3: prices=amounts*5.0; break;
        }   break;

        case 2:
        printf("\n1.铅笔(1.0元/支)   2.橡皮(2.5/块)   3.直尺(2.0/个)");
        printf("\n-请选择商品:");
        scanf("%d", &b);
        printf("-请输入数量:");
        scanf("%d", &amounts);
        switch(b){
            case 1: prices=amounts*1.0; break;
            case 2: prices=amounts*2.5; break;
            case 3: prices=amounts*2.0; break;
        }   break;

        case 3:
        printf("\n1.薯片(6.9元/包)   2.鸡排(8.9/份)   3.奶茶(9.9/杯)");
        printf("\n-请选择商品:");
        scanf("%d", &b);
        printf("-请输入数量:");
        scanf("%d", &amounts);
        switch(b){
            case 1: prices=amounts*6.9; break;
            case 2: prices=amounts*8.9; break;
            case 3: prices=amounts*9.9; break;
        } 
    }

    printf("总价格为:%.2f", prices);
    return 0;
}