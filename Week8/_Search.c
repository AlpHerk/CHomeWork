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

int BinSearch(long num[], long x, int n)
{
    int low = 0, high = n-1, mid;
    while (low <=high)
    {
        mid = low + (high - low) / 2;
        if (x > num[mid])
        {
            low = mid +1;
        }
        else if (x < num[mid])
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

int ReadScore(long num[], int score[])
{
    int i = -1;
    do{
        i++;
        printf("Input num, score:");
        scanf("%ld%d", &num[i], &score[i]);
    }while(score[i] >=0);
    
    return i;
}
