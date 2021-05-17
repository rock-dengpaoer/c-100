#include <stdio.h>
int main()
{
    unsigned a,b,c,d;
    printf("请输入整数：\n");
    scanf("%o",&a);
    b=a>>4;
    c=~(~0<<4);
    d=b&c;
    printf("%o\n%o\n",a,d);
    return 0;
}