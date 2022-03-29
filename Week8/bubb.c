#include <stdio.h>
void BubbleSort(int score[], int n);
int main(void)
{
    printf("请输入10个数字：\n");
    int nums[10];
    for (int i=0; i<10; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("\n冒泡法从大到小排序为：\n");
    BubbleSort(nums, 10);
    for (int i=0; i<10; i++)
    {
        printf("%d ", nums[i]);
    }

	return 0;
}

void BubbleSort(int score[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(score[j-1]<score[j])
            {
                temp = score[j];
                score[j] = score[j-1];
                score[j-1] = temp;
            }
        }
    }
}