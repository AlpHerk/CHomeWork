#include <stdio.h>
int main(void)
{
    char ch;
    scanf("%c", &ch);
    if(ch>'0'&&ch<'9')
        printf("%c������", ch);
    else if(ch>'A'&&ch<'Z')
        printf("%c�Ǵ�д��ĸ", ch);
    else if(ch>'a'&&ch<'z')
        printf("%c��Сд��ĸ", ch);
    else if(ch<'32')
        printf("%c�ǿ����ַ�", ch);
    else
        printf("%c�������ַ�", ch);
    return 0;
}