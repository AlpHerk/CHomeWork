#include <stdio.h>
#include <ctype.h>
int main()
{
    int i=0;
    char s[80];
    int digit=0, alpher=0;

    printf("请输入长度小于80的字符串:\n");
	gets(s);

    while(s[i]!='\0' && s[i]!='\n')
    {
        if (isdigit(s[i]))
            digit++;
        else if ( islower(s[i]) || isupper(s[i]) )
            alpher++;
        i++;
    }	

    printf("字母个数为：%d, 数字个数为：%d", alpher, digit);

    return 0;
}