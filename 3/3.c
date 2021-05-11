#include<stdio.h>

int pingfang(int i)
{
	for(int n=0;n<i;n++)
		if(i==n*n)
		return 1;
		return -1;
}

int pingfang(int i);

int  main()
{
//	int pingfang(int i);
	int i,n;
	for(i=-999;i<999;i++)
	{			
		n=i+100;
		n=pingfang(n);
		if(n==1)
		{
			n=i+268;
			n=pingfang(n);
			if(n==1)
			{
				printf("this number is %d\n",i);
//				break;
			}
		}
	
	}
	return 0;
	
}
