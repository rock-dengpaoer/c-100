#include<stdio.h>

#define Jan 31
#define Feb Jan+28
#define	Mar Feb+31
#define Apr Mar+30
#define May Apr+31
#define Jun May+30
#define Jul Jun+31
#define Aug Jul+31
#define Sep Aug+30
#define Oct Sep+31
#define Nov Oct+30

void main()
{
	int year,mon,day,i;
//	int i;
	do{
		i=1;
		printf("please input year,mon,day:\n");
//		int year,mon,day;
		scanf("%d%d%d",&year,&mon,&day);
		if(mon>12||day>31)
		{
			printf("error,please try again\n");
			i=-1;
		}
	}while(i==-1);
	switch(mon)
	{
		case 1:break;
		case 2:day+=Jan;break;
		case 3:day+=Feb;break;
		case 4:day+=Mar;break;
		case 5:day+=Apr;break;
		case 6:day+=May;break;
		case 7:day+=Jun;break;
		case 8:day+=Jul;break;
		case 9:day+=Aug;break;
		case 10:day+=Sep;break;
		case 11:day+=Oct;break;
		case 12:day+=Nov;break;
	}
	if(year%4==0)
	{
		if(mon>2)
		day+1;
	}
	printf("day is num:%d\n",day);
}
