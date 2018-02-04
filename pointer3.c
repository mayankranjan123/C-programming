#include<stdio.h>
int main()
{

int a=100;
int *b,**p;
b=&a;
p=&b;

printf("%d\n",a);
printf("%d\n",*b);
printf("%d\n",**p);
printf("%d\n",*p);
printf("%d\n",b);
}
