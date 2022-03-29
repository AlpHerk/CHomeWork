#include <stdio.h>
#include <string.h>
int fun(char s[])
{
    int i = 0;
    int len = strlen(s);
    int n = len / 2;
    while ( i <= n )
    {
        if ( s[i] == s[len-i-1] ) {
            i++;
            continue;
        }
        else    return -1;
    }
    return 1;
}

int main()
{
    char s[80];
	printf("请输入长度小于80的字符串:\n");
	gets(s);

    if ( fun(s) > 0 )
        printf("\"%s\"是回文数", s);
    else 
        printf("\"%s\"不是回文数", s);

    return 0;
}