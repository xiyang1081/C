#include <stdio.h>
main()
{
	char ch,n=0;
	printf("Please input a string with a # in the end\n");
	scanf("%c",&ch);
	while(ch!='\n')
	{
		printf("%c",ch);
		scanf("%c",&ch);
	}
	return 0;
}
