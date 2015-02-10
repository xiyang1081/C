//main.c
#include "sayhello.h"

int main()
{
	SayHello();
	printf("ssss\n");
	return 0;
}

//sayhello.c
#include "sayhello.h"

void SayHello()
{
	printf("Hello,world!\n");
}

//sayhello.h

#include<stdio.h>

void SayHello();
