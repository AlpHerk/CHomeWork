#include <stdio.h>
int main(void)
{
	int num;
	int a, b, c, d;
	int p;
	printf("������һ��������0-9999����");
	scanf("%d", &num);
	if(num>999)  p=4;
	else 
        if(num>99)  p=3;
	    else 
            if(num>9)  p=2;
	        else
	            p=1, printf("������һ��%dλ����!\n",p);
    
	a=num/1000;
	b=(num-a*1000)/100;
	c=(num-a*1000-b*100)/10;
	d=num-a*1000-b*100-c*10;
	printf("ÿλ����Ϊ:");
	switch(p)
	{
		case 4:
			printf("%d,%d,%d,%d\n",a,b,c,d);
			printf("��������:");
			printf("%d%d%d%d\n",d,c,b,a);
			break;
		case 3:
			printf("%d,%d,%d\n",b,c,d);
			printf("��������:");
			printf("%d%d%d\n",d,c,b);
			break;
		case 2:
			printf("%d,%d\n",c,d);
			printf("��������:");
			printf("%d%d\n",d,c);
			break;
		case 1:
			printf("%d\n",d);
			printf("��������:");
			printf("%d\n",d);
			break;
	}
    return 0;
}