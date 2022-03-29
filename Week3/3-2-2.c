#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c",&c);
	if(c<='u'&&c>='a')
		c=c+5;
	else
        if(c<='z'&&c>='v') 
        c-=21;
    printf("%c\n",c);
  
    return 0;
}