#include <stdio.h>  
int fun(int t)
{
	int f0=0,f1=1,f;
	do
	{
		f=f0+f1;
		f0=f1;
		f1=f;
	}while(f<t);              
	return f;	                   
}
int main(void)
{
	int n;
	n=1000;
	printf("n=%d,f=%d\n", n, fun(n)); 
    return 0;
}
