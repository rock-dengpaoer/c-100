#include<stdio.h>

void main()
{
	int x,y;
	for(x=1;x<10;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("%d*%d=%d ",y,x,x*y);
		}	
		printf("\n");
	}
}

