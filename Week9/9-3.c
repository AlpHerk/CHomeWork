#include<stdio.h>
void fun(char s[80])
{
	int i=0;
	while( s[i] != '\0' )	
	{
		if(s[i]>='A' & s[i]<='Z' || s[i]>='a' && s[i]<='z')
		{
			if(s[i]=='Z')       s[i] = 'A';
			else if(s[i]=='z') 	s[i] = 'a';
			else    s[i] += 1 	;
		}
		i++;
	}
}
int main()
{
	char s[80];
	printf("Enter a string with length < 80. :\n");
	gets(s);

	printf("The string : \n");
	puts(s);

	fun(s);

	printf("The Cords : \n");
	puts(s);

	return 0;
}