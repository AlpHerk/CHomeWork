#include<stdio.h>
int main(void)
{
	int m=246;
	int x;
	printf("请输入x=");
	scanf("%d",&x);

	if(x==m)                                  
		printf("Right\n");
	else{
            printf("Wrong\n");
        if (x>m)
		    printf("Too high\n");
	    else
		    printf("Too low\n");
    }
    return 0;
}