#include <stdio.h>
void SelectionSort(double score[], int n);

int main(void)
{
    printf("请输入10个小数：\n");
    double nums[10];
    for (int i=0; i<10; i++)
    {
        scanf("%lf", &nums[i]);
    }

    printf("\n选择排序从小到大排序为：\n");
    SelectionSort(nums, 10);
    for (int i=0; i<10; i++)
    {
        printf("%lf ", nums[i]);
    }

	return 0;
}


void SelectionSort(double score[], int n)
{
    int i, j, k;
    double temp;
    for(i=0; i<n-1; i++)
    {
        k = i; 
        for(j=i+1; j<n; j++)
        {
            if( score[k] > score[j] )
            {
                k = j;
            }
        }
        if( k != i )
        {
            temp = score[k];
            score[k] = score[i];
            score[i] = temp;
        }
    }
}