#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("Ram.txt","w");
	printf("Enter line and press EOF\n");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen("Ram.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	
}
