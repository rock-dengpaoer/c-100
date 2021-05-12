#include<stdio.h>

void main()
{
	int n=0,y;
	for(int i=101;i<=200;i++)
	{
		y=1;
		for(int x=2;x<i;x++)
		{
			if(i%x==0)
			{
			y=0;
			break;
			}
		}
		if(y==1)
		{
			printf("%d is prime number\n",i);
			n++;
		}
	}
	printf("all is %d\n",n);
}
