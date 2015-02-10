#include<stdio.h>

void insert_sort(int * arr,unsigned int n);

int main()
{
	int i=0;
	unsigned int count=5;
	int arr[5]={23,43,4,45,2};
	insert_sort(arr,count);
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

void insert_sort(int * arr,unsigned int n)
{
	int i,j,tmp;
	for(i=1;i<n;i++)
	{
		tmp=*(arr+i);
		for(j=i;j>0&&*(arr+j-1)>tmp;j--)
		{
			*(arr+j)=*(arr+j-1);
		}
		*(arr+j)=tmp;
	}
}
