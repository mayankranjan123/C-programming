#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[10];
	int n;
	fp=fopen("tot.txt","r+");
	fgets(ch,10,fp);
	printf("Inititial: %s\n",ch);
	n=ftell(fp);
	printf("Pointer location: %d\n",n);
	fseek(fp,6,0);
	fputs("Checking",fp);
	
	rewind(fp);
	n=ftell(fp);
	printf("Location: %d\n",n);
	fgets(ch,30,fp);
	printf("%s",ch);
	fclose(fp);
	
	
	
}
