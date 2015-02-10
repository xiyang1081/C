#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Please input number(2):\n");
	scanf("%d%d",&a,&b);
	c=a>b?a:b;//三目运算符？：
	printf("Max:%d\n",c);
	return 0;
}
