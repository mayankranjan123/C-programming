#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("Mayank.txt","w");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	
	fclose(fp);
	fp=fopen("Mayank.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	
}
