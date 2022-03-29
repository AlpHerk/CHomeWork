#include <stdio.h>
int main()
{
    int a = 1, b = 2, t;
    printf("����ǰ��\n");
    printf("a=%d\t b=%d\n", a, b);

    t = a;
    a = b;
    b = t;
    printf("������\n");
    printf("a=%d\t b=%d\n", a, b);
    return 0;
}