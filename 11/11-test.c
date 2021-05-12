/*
#include<stdio.h>

int digui(int m)
{
	int i=1,n1=0,n2=1;
	if(i++>=m)
	{
		return n2;
	}
	n1=n1+n2;
	n2=n1+n2;
	digui(m);
}

void main()
{
	int n;
	for(int i=1;i<=40;i++)
	{
		n=digui(i);
		printf("%d\n",n);
	}
}
*/
#include<stdio.h>
int fibonaci(int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    return fibonaci(i-1) + fibonaci(i-2);
}

int main()
{
    int i;
    printf("month\tnumber\n");
    for (i = 1; i < 41; i++)
    {
        printf("%d\t%d\n", i,fibonaci(i));
    }

    return 0;
}
