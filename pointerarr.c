#include<stdio.h>
int main()
{
	int a[5]={11,22,33,44,55},i;
	int *p=a;
	for(i=0;i<5;i++)
	{
		printf("\n value a[%d]:%d adress a[%d]:%u",i,a[i],i,&a[i]);
	}	
	printf("\n\n ----------using pointer----------\n\n");
	for(i=0;i<5;i++)
	{
		printf("\n value a[%d]:%d adress a[%d]:%u",i,*(p+i),i,(p+i));
	}	
}