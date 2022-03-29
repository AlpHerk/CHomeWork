#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c",&c);
    
	if(c>='a'&&c<='z')  c=c-32;
	else{
        if(c>='A'&&c<='Z')  c=c+32;
        else    c='#';
    }
    printf("%c\n",c);
    return 0;
}