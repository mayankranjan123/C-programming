#include<stdio.h>
int main()
{
	FILE *fp;
	int ch[10];
	fp=fopen("ranjan.txt","w");
	printf("Enter a string\n");
	scanf("%s",ch);
	fputs(ch,fp);
	fclose(fp);
	fp=fopen("ranjan.txt","r");
	fgets(ch,6,fp);
	printf("%s",ch);
	fclose(fp);
}
