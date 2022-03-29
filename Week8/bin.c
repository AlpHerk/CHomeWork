#include <stdio.h>
int BinSearch(double nums[], double x, int n);
void SelectionSort(double nums[], int n);
int main(void)
{
    printf("������10��С����\n");
    double nums[10], x;
    int index;
    for (int i=0; i<10; i++)
    {
        scanf("%lf", &nums[i]);
    }

    SelectionSort(nums, 10);
    printf("\n�Ӵ�С������ɣ�\n");

    printf("\n����������ҵ�����\n");
    scanf("%lf", &x);
    index = BinSearch(nums, x, 10);
    if (index != -1)
    {
        printf("�����ǣ�%lf", nums[index]);
    }
    else
    {
        printf("û���ҵ�");
    }
    
	return 0;
}

int BinSearch(double nums[], double x, int n)
{
    int low = 0, high = n-1, mid;
    while (low <=high)
    {
        mid = low + (high - low) / 2;
        if (x > nums[mid])
        {
            low = mid +1;
        }
        else if (x < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

void SelectionSort(double nums[], int n)
{
    int i, j, k;
    double temp;
    for(i=0; i<n-1; i++)
    {
        k = i; 
        for(j=i+1; j<n; j++)
        {
            if( nums[k] > nums[j] )
            {
                k = j;
            }
        }
        if( k != i )
        {
            temp = nums[k];
            nums[k] = nums[i];
            nums[i] = temp;
        }
    }
}