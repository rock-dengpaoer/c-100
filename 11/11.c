#include<stdio.h>

void main()
{
	int n1,n2,n3,m;//n1 is number last last month,n2 is number last,n3 is now,m is month
	n1=1;
	n2=1;
	n3=1;
	for(m=1;m<=40;m++)
	{
		if(m>2)
		{
			n3=n1+n2;
			n1=n2;
			n2=n3;
		}
		printf("%d month is number %d\n",m,n3*2);
	}
}
