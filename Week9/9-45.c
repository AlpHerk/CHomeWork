#include<stdio.h>
#include<string.h>
int fun(char s[])
{
	int i, j, len;
	len = strlen(s);		//计算字符串s的有效长度
	for(i=0, j=0; i<len ; i++)  //循环条件表示字符串遍历未结束
	{
		if( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') //当前字符是大小写字母
		{
			s[j++] = s[i];
		}
	}
	s[j]='\0';
	return len-j;
}
int main()
{
	char s[] = {"log4net.dll"};
	int n;
	n = fun(s);	//调用函数fun
	printf("%d\n%s", n, s);
	return 0;
}