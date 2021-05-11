#include<stdio.h>

void main()
{
	int n1=1,n2=1,n3=1;
	for(n1=1;n1<5;n1++)
	{
		for(n2=1;n2<5;n2++)
		{
			for(n3=1;n3<5;n3++)
			{
				if(n1!=n2&&n1!=n3&&n2!=n3)
				printf("%d%d%d\n",n1,n2,n3);
			}
		}
	}
}
