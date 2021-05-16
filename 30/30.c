#include<stdio.h>

int main()
{
	long ge,shi,qian,wan,x;
	printf("please enter five numbers:\n");
	scanf("%ld",&x);
	wan=x/10000;
	qian=x%10000/1000;
	shi=x%100/10;
	ge=x%10;
	printf("%ld\n",x);
	if(wan==0||x>=100000)
	{
		printf("error,try again\n");
		getchar();
		getchar();
		getchar();
		getchar();
		fflush(stdin);
		main();
	}
	if(ge==wan&&shi==qian)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
}
