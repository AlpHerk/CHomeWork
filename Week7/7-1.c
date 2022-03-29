#include <stdio.h>  
int fun(int a,int b,int c)        
{
	if(a+b>c && b+c>a && a+c>b)        
	{
		if(a==b&&b==c)  
            return 3;
		else if(a==b||b==c||a==c)   
            return 2;
		else    
            return 1;
	}
	else
        return 0;
}

int main(void)
{
	int a,b,c,shape;
	scanf("%d%d%d",&a,&b,&c);
	shape=fun(a,b,c);
	printf("The shape:%d\n",shape);
    return 0;
}