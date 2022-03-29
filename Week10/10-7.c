#include <stdio.h>
#define N 5
int main()
{
    int a[N] = {};
    int *p = a;
    int i, j=0;

    for (i=0; i<N; i++)
        scanf("%d", p+i);

    for (i=0; i<N; i++)
        printf( "%d ", *(p +i) );
    printf("\n");

    for(i=1; i<N; i++)
	{
		if(*(p+i)>*(p+j))
			j=i;
	}

    printf( "%d ", *(p +j) );
 
    return 0;
}