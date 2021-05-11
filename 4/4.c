#include<stdio.h>

void main()
{
	int year,mon,day,num;
	printf("please input year,mon,day:\n");
	scanf("%d%d%d",&year,&mon,&day);
	num=day;
	switch(mon)
	{
		case 1:break;
		case 2:num=num+31;break;
		case 3:num=num+31+28;break;
		case 4:num=num+31+28+31;break;
		case 5:num=num+31+28+31+30;break;
		case 6:num=num+31+28+31+30+31;break;
		case 7:num=num+31+28+31+30+31+30;break;
		case 8:num=num+31+28+31+30+31+30+31;break;
		case 9:num=num+31+28+31+30+31+30+31+31;break;
		case 10:num=num+31+28+31+30+31+30+31+31+30;break;
		case 11:num=num+31+28+31+30+31+30+31+31+30+31;break;
		case 12:num=num+31+28+31+30+31+30+31+31+30+31+30;break;
	}
	if(year%4==0)
	{
		if(mon>2)
		num+1;
	}
	printf("day is num:%d\n",num);
}
