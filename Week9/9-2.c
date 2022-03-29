#include<stdio.h>
void fun(char p[])
{
	char max, t;
	int i = 1, k;
	max = 0;
	k = 0;	//用来保存最大值的下标 
	while(p[i] != '\0')
	{
		if(max < p[i])
		{
			max = p[i];
			k = i;
		}
		i++;
	}
	if(k != 0)
	{
		t = p[0]; 
        p[0] = p[k]; 
        p[k] = t;
	}
}

int main(void)
{
	char str[80];
	printf("Enter a string:");
	gets(str);

	printf("\nThe original string:");
	puts(str);

	fun(str);

	printf("\nThe string after moving:");
	puts(str);

	return 0;
}