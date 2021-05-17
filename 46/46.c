#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)

int main()
{
	int num;
	int again=1;
	while(again)
	{
		printf("input:");
		scanf("%d",&num);
		printf("pingfang is %d\n",SQ(num));
		if(num>=50)
			again=TRUE;
		else
			again=FALSE;	
	}
	return 0;
}


