#include <stdio.h>
int main(void)
{
    float prices;
    int a, b, amounts;
    printf("\n__________ѧУС����__________");
    printf("\n\n\n1.����Ʒ   2.�ľ�   3.ʳƷ"
    "\n-��ѡ����Ʒ���: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        printf("\n1.��ˢ(3.5Ԫ/֧)   2.����(9.5/֧)   3.����(5.0/֧)");
        printf("\n-��ѡ����Ʒ:");
        scanf("%d", &b);
        printf("-����������:");
        scanf("%d", &amounts);
        switch(b){
            case 1: prices=amounts*3.5; break;
            case 2: prices=amounts*9.5; break;
            case 3: prices=amounts*5.0; break;
        }   break;

        case 2:
        printf("\n1.Ǧ��(1.0Ԫ/֧)   2.��Ƥ(2.5/��)   3.ֱ��(2.0/��)");
        printf("\n-��ѡ����Ʒ:");
        scanf("%d", &b);
        printf("-����������:");
        scanf("%d", &amounts);
        switch(b){
            case 1: prices=amounts*1.0; break;
            case 2: prices=amounts*2.5; break;
            case 3: prices=amounts*2.0; break;
        }   break;

        case 3:
        printf("\n1.��Ƭ(6.9Ԫ/��)   2.����(8.9/��)   3.�̲�(9.9/��)");
        printf("\n-��ѡ����Ʒ:");
        scanf("%d", &b);
        printf("-����������:");
        scanf("%d", &amounts);
        switch(b){
            case 1: prices=amounts*6.9; break;
            case 2: prices=amounts*8.9; break;
            case 3: prices=amounts*9.9; break;
        } 
    }

    printf("�ܼ۸�Ϊ:%.2f", prices);
    return 0;
}