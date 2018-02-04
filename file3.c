#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp,*np;
	char name[10];
	fp=fopen("RAM.txt","r");
	fgets(name,5,fp);
	printf("%s",name);
	fclose(fp);
	np=fopen("RAM.txt","w");
	strcpy(name,"njcdcbhdhchdvc");
	fputs(name,np);
	fclose(np);
	
	
}
