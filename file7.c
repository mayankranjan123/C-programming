#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[10],file[10];
	printf("Enter file name\n");
	scanf("%s",file);
	fp=fopen(file,"r");
	if(fp==NULL)
	{
		printf("File couldn't open\n");
		exit(0);
	}

		fgets(ch,10,fp);
		
	printf("Text is : %s",ch);
	fclose(fp);
}
