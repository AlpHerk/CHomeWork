#include <stdio.h>
int main(void)
{
	int year, month, day, leap, a;
	printf("���������:");
	scanf("%d", &year);
	printf("�������·�:");
	scanf("%d", &month);
    printf("����������:");
	scanf("%d", &day);

    if((year%4==0&&year%400!=0)||year%100==0) leap=1;
    else  leap=0;
    
    for(a=0; a<=month-1; a++) 
    {

        switch(a)   
        {
            case 0: break;
            case  1: case 3:case 5:case 7:case 8:case 10:
            case 12: day+=31; break;   
            case 4:  case 6:case 9:case 11:day+=30; break;
            case 2:  day=day+28+leap; break;
        }
    }
	printf("��һ���Ǹ����%d��!\n", day);
    return 0;
}