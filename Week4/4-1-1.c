#include <stdio.h>
int main(void)
{
	int x,y;
	scanf("%d",&x);
	switch(x)
	{
		case 6: 
		case 5:   y=x+1; break;
		case 4:   y=x-1;
		default:  y=x+x;
	}
	printf("y=%d\n",y);
    return 0;
}