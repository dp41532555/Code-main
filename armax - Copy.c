#include<stdio.h>
int main()
{
 	int i,a[10],b;
	for(i=0;i<10;i++)
	{
	printf("a[%d]:",i);
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(b>a[i])
		printf("%d",b);
	}

}