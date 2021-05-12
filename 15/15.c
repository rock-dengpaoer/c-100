#include<stdio.h>

void main()
{
	int score;
	char grade;
	printf("please input score:\n");
	scanf("%d",&score);
	grade=(score>=90)?'A':((score>=60)?'B':'C');
	printf("%c\n",grade);
}
