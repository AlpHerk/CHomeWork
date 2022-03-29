#include <stdio.h>
int main(void)
{
	int year, month, day, leap, a;
	printf("请输入年份:");
	scanf("%d", &year);
	printf("请输入月份:");
	scanf("%d", &month);
    printf("请输入日期:");
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
	printf("这一天是该年第%d天!\n", day);
    return 0;
}