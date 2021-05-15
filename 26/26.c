#include<stdio.h>

int main()
{
	int fact(int);
	printf("5!=%d\n",fact(5));
}
	
int fact(int j)
{
	int sum;
	if(j==0)
	{
		sum=1;
	}
	else
	{
		sum=j*fact(j-1);
	}
	return sum;
}
