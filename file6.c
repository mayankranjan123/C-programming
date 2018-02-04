#include<stdio.h>
int main()
{
	
	char ch[10],st;
	FILE *fp;
	fp=fopen("tot.txt","a");
	printf("Enter a string\n");
	scanf("%s",ch);
	fputs(ch,fp);
	if(ferror(fp)==0)
	{
		printf("Reading\n");
	}
	fclose(fp);
	fp=fopen("tot.txt","r");
	fgets(ch,10,fp);
	printf("%s",ch);
		if(feof(fp)!=0)
	{
		printf("EOF\n");
		
	}
		if(ferror(fp)==0)
	{
		printf("Reading\n");
	}
	
	fclose(fp);
	
	
}
