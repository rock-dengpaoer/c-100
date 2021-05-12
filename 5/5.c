#include<stdio.h>

/*
void jiaohuan(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
*/

void main()
{
	int x,y,z,t;
	printf("please input x,y,z:\n");
	scanf("%d%d%d",&x,&y,&z);
/*	if(x>y)
	{
		jiaohuan(x,y);	
		if(x>z)
		{
			jiaohuan(x,z);
			if(y>z)
			{
				jiaohuan(y,z);
			}
		}
	}
	else
	{
		if(x>z)
		{
			jiaohuan(x,z);
			if(y>z)
			jiaohuan(y,z);
		}
		else
		{
			if(y>z)
			jiaohuan(y,z);
		}
	}
*/
	if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	if(x>z)
	{
		t=x;
		x=z;
		z=t;
	}
	if(y>z)
	{
		t=y;
		y=z;
		z=t;
	}
	printf("num is %d,%d,%d\n",x,y,z);
}
