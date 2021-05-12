#include<stdio.h>

void main()
{
	int n1,n2,n3;
	for(n1=1;n1<=9;n1++)
	{
		for(n2=0;n2<=9;n2++)
		{
			for(n3=0;n3<=9;n3++)
			{
				if(n1*100+n2*10+n3==n1*n1*n1+n2*n2*n2+n3*n3*n3)
				printf("number is %d%d%d\n",n1,n2,n3);
			}
		}
	}
}
