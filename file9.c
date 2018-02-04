#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch[10],st[10];
	fp=fopen("tot.txt","wb+");
	strcpy(ch,"Mayank");
	fwrite(ch,sizeof(ch),1,fp);
	rewind(fp);//for making the pointer to point at beginning.
	fread(st,sizeof(ch),1,fp);
	printf("%s",st);
	fclose(fp);
	
	
}
