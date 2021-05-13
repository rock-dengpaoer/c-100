#include<stdio.h>

int main()
{
	int a,b,t,r,n;
	printf("please input two number:\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		t=b;
		b=a;
		a=t;
	}
	r=a%b;
	n=a*b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	printf("gongyueshu:%d,gongbeishu:%d\n",b,n/b);
	return 0;
}
