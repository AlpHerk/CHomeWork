#include <stdio.h>
#include <ctype.h>
int main()
{
    int i=0;
    char s[80];
    int digit=0, alpher=0;

    printf("�����볤��С��80���ַ���:\n");
	gets(s);

    while(s[i]!='\0' && s[i]!='\n')
    {
        if (isdigit(s[i]))
            digit++;
        else if ( islower(s[i]) || isupper(s[i]) )
            alpher++;
        i++;
    }	

    printf("��ĸ����Ϊ��%d, ���ָ���Ϊ��%d", alpher, digit);

    return 0;
}