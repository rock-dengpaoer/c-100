#include<stdio.h>
int main()
{
	float h,s;
	h=s=100;
	h=h/2;
	for(int i=2;i<=10;i++)
	{
		s=s+2*h;
		h=h/2;
	}
	printf("all=%f,10=%f\n",s,h);
	return 0;
}
