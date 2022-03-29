#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a,&b,&c);
    int *pa=&a, *pb=&b, *pc=&c;
    

    if(*pa<*pb)
    {
        int *t;
        t = pb,
        pb = pa,
        pa = t;
    }
    if(*pa<*pc)
         {
        int *t;
        t = pc,
        pc = pa,
        pa = t;
    }
    if(*pb<*pc)
       {
        int *t;
        t = pb,
        pb = pa,
        pa = t;
    }

    printf("%d %d %d", *pa, *pb, *pc);
    return 0;
}