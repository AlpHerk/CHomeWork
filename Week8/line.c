#include <stdio.h>
int LinSearch(long num[], long x, int n);
int main(void)
{
    printf("请输入10个数字：\n");
    long nums[10], x;
    int index;
    for (int i=0; i<10; i++)
    {
        scanf("%ld", &nums[i]);
    }

    printf("\n请输入待查找的数：\n");
    scanf("%ld", &x);
    index = LinSearch(nums, x, 10);
    if (index != -1)
    {
        printf("%ld的索引是：%d", x, index);
    }
    else
    {
        printf("没有找到");
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