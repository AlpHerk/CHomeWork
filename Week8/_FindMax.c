#include <stdio.h>
int ReadScore(int score[]);
int FindMaxValue(int x[], int n);
int FindMaxIndex(int x[], int n);
#define N 40

int main(void)
{
    int score[N], maxIndex, n;
    n = ReadScore(score);
    printf("Toatal student are %d\n", n);
    maxIndex = FindMaxIndex(score, n);
    printf("score[%d] is the hightest: %d\n", maxIndex, score[maxIndex]);
    
    return 0;
}

int FindMaxValue(int x[], int n)
{
    int maxIndex, i;
    maxIndex = 0;
    for(i=1; i<n; i++)
    {
        if(x[i] > x[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

