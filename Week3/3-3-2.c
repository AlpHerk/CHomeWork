#include <stdio.h>
int main(void)
{
    char ch;
    scanf("%c", &ch);
    if(ch>'0'&&ch<'9')
        printf("%c是数字", ch);
    else if(ch>'A'&&ch<'Z')
        printf("%c是大写字母", ch);
    else if(ch>'a'&&ch<'z')
        printf("%c是小写字母", ch);
    else if(ch<'32')
        printf("%c是控制字符", ch);
    else
        printf("%c是其他字符", ch);
    return 0;
}