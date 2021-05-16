#include<stdio.h>

int main()
{
	int i=5;
	void palin(int n);
	printf("input\40:\40");
	palin(i);
	printf("\n");
}
int i;
void palin(n)
{
	char next;
	if(n<=1)
	{
		next=getchar();
		printf("answer is \40:\40");
		putchar(next);
	}
	else
	{
		next=getchar();
		palin(n-1);
		putchar(next);
	}
}
