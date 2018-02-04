#include<stdio.h>
int main()
{
	int a=100;
	int *p;
	p=&a;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%p",&a);
	*p=*p+100;
	printf("%d\n",a);
	printf("%d",*p);
}
