#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int r, n, flag, sum;
    r = rand()%100+1;
    for(sum=1; ; sum++)
    {
        printf("������²�����֣�");
        scanf("%d", &n);
        if( n < r )   printf("��С�ˣ�����Ŭ��ѽ��");
        else if (n>r) printf("�´��ˣ��������Ͱ���");
        else 
        {
            printf("�¶�����");
            break;
        }
        if(sum>=3)
        {
            printf("���ν�������û�в¶ԣ����ź���");
            break;
        }
    }
    return 0;
}