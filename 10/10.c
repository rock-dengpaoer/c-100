#include<stdio.h>

void main()
{
	int x,y;
	printf("@@\n");
	for(x=2;x<10;x++)
	{
		for(y=1;y<=x;y++)
		{
			printf("*");
		}
		printf("\n");
	}
}
