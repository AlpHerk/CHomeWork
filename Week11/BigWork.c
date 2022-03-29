#include <stdio.h>
#include <string.h>
#define M 25
#define N 26
void Tips(void);                //打印提示信息
void GetWord(char (*A)[N]);     //从键盘读取单词
void Encrypt(char *a, char *b); //对单词进行加密

int main()
{
    // ①二维数组A用于存储原文本，二维数组B存储加密文本
    char A[M][N]={0}, B[M][N]={0};                            
    Tips();                          
    
    printf("请输入待加密的英文句子：\n");
    GetWord(A);
    

    // ②对文本进行加密处理
    for (int i=0; i<M; i++)
    {
        char *a = A[i], *b = B[i];
        if (strlen(a)%2==0)  //符合条件的单词加密后存入B数组
            Encrypt(a,b);
        else                 //不符合的单词直接存入B数组
            strcpy(B[i], A[i]);
    }

    // ③按行输出二维数组B
    printf("\n加密后的英文句子为：\n");
    for (int i=0; i<M; i++)     
        printf("%s ", B[i]);

    return 0;
}

void Tips(void)
{
    printf("\
    **********************************************\n\
    |             * * * T I P S * * *\n\
    |    1.支持含标点句子加密，如: this is，a desk!\n\
    |    2.支持自动忽略句子中多余空格\n\
    |    3.加密后字母均为小写\n\
    |\n\
    |                          201921144049 唐周才\n\
    |\n\
    **********************************************\n\
    \n");

}
void GetWord(char (*A)[N])
{
    int ch;
    int i=0, j=0;
    while ((ch=getchar())!='\n')//当输入回车时结束读取单词
    {
        if(ch>='A'&&ch<='Z')    //根据题意，一律替换为小写
            ch += 32;
        if ( (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z') )
        {                       
            A[i][j]=ch;
            j++;
        }
        else   //输入非字母(如空格)，数组A下一行准备存储单词
        {
            i++;
            j = 0;
        }
    }
}
void Encrypt(char *a, char *b)
{
    
    int len = strlen(a);

    if ( (a[0]>='a'&&a[0] <='n') || (a[0]>='A'&&a[0]<='N') )
    {                   //以a-n开头，单词所有字母循环左移一次
        int i;
        char c = a[0];
        for (i=1; i<len; i++)
           b[i-1] = a[i];
        b[len-1] = c;
    }

    if ( (a[0]>='o'&&a[0] <='z') || (a[0]>='O'&&a[0]<='Z') )
    {                   //以o-z开头，单词所有字母循环右移一次
        int i;
        char c = a[len-1];
        for (i=len-2; i>=0; i--)
            b[i+1] = a[i];
        b[0] = c;
    }
}
