#include<stdio.h>
void main()
{
	int i;
	float n=0.0;
	scanf("%d",&i);
	if(i<=0)
	{
	printf("this is a wrong data\n");
	return 0;
	}
	else if(i<10||i==10)
	n=i*0.1;
	else if(i<20||i==20)
	n=10*0.1+(i-10)*0.075;
	else if(i<40||i==40)
	n=10*0.1+10*0.075+(i-20)*0.05;
	else if(i<60||i==60)
	n=10*0.1+10*0.075+20*0.05+(i-40)*0.03;
	else if(i<100||i==100)
	n=10*0.1+10*0.075+20*0.05+20*0.03+(i-60)*0.015;
	else if(i>100)
	n=10*0.1+10*0.075+20*0.05+20*0.03+40*0.015+(i-100)*0.01;
	
	
	printf("%.2f\n",n);
}
