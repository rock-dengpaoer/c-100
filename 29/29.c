#include<stdio.h>

int main()
{
	long a,b,c,d,e,x;
	printf("please input five numbers:");
	scanf("%ld",&x);
	a=x/10000;
	b=x%10000/1000;
	c=x%1000/100;
	d=x%100/10;
	e=x%10;
	if(a!=0)
	{
		printf("%ld %ld %ld %ld %ld\n",e,d,c,b,a);
	}
	else
	{
		printf("error,please try again\n");
		main();
	}
}
