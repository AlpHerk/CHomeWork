#include<stdio.h>
int length(char p[])	
{
	int n;
	n=0;
	while(p[n] != '\0')
	{
		n++;
	}
	return n;
}
int main()
{
	int len;
	char s[20];
	printf("please input a string:\n");
	scanf("%s", &s);
	len = length(s);
	printf("the string has %d characters.", len);
	return 0;
}