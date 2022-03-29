#include <stdio.h>
#include <math.h>
void ChangeSort(int score[], int n);
void BubbleSort(int score[], int n);
void SelectionSort(int score[], int n);

int main(void)
{


	return 0;
}

//每遍：相邻&两两交换
void BubbleSort(int score[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=1; j<n-i; j++)
        {
            if(score[j-1]>score[j])
            {
                temp = score[j];
                score[j] = score[j-1];
                score[j-1] = temp;
            }
        }
    }
}

//每遍：前排&余数交换
void ChangeSort(int score[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(score[i]>score[j])
            {
                temp = score[j];
                score[j] = score[i];
                score[i] = temp;
            }
        }
    }

}

//每遍：前排放余数
void SelectionSort(int score[], int n)
{
    int i, j, k, temp;
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