#include <stdio.h>
int LinSearch(long num[], long x, int n);
int main(void)
{
    printf("������10�����֣�\n");
    long nums[10], x;
    int index;
    for (int i=0; i<10; i++)
    {
        scanf("%ld", &nums[i]);
    }

    printf("\n����������ҵ�����\n");
    scanf("%ld", &x);
    index = LinSearch(nums, x, 10);
    if (index != -1)
    {
        printf("%ld�������ǣ�%d", x, index);
    }
    else
    {
        printf("û���ҵ�");
    }

	return 0;
}

int LinSearch(long num[], long x, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(num[i] == x)
        {
            return i;
        }
    }
    return -1;
}