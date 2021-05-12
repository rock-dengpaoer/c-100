#include<stdio.h>

void main()
{
	int x,y;
	for(x=1;x<9;x++)
	{
		if(x%2==1)
		{
			for(y=1;y<9;y++)
			{
				if(y%2==1)
				{
					printf("#");	
				}
				else
				{
					printf("0");
				}
			}
		}
		else
		{
			for(y=1;y<9;y++)
			{
				if(y%2==1)
				{
					printf("0");
				}
				else
				{
					printf("#");
				}
			}
		}
		printf("\n");
	}
}
