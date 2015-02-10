#include<stdio.h>

int main()
{
	int x,y,z;
	printf("Please input two number:\n");//提示输入两个数字
	scanf("%d%d",&x,&y);//接收
	z=x*y;//计算
	printf("%d * %d = %d \n",x,y,z);//打印出
	
	return 0;
}
