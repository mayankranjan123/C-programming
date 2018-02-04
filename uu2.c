#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("cool.txt","w");
	int i,n;
	for(i=0;i<10;i++)
	{
		putw(i,fp);
	}
	fclose(fp);
	fp=fopen("cool.txt","r");
	while((n=getw(fp))!=EOF)
	{
		printf("%d",n);
	}
	fclose(fp);
}
