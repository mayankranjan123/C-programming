#include<stdio.h>
int main()
{
	int a[]={1,2,3};
	int *p[3],i;
	for(i=0;i<3;i++)
	{
		printf("%d",a[i]);
		p[i]=&a[i];
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d",*p[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		*p[i]=*p[i]+3;
		printf("%d%d",*p[i],a[i]);
	}
}
