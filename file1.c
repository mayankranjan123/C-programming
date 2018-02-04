#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("RAMAN.txt","w");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("Output");
	fp=fopen("RAMAN.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}
