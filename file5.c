#include<stdio.h>
int main()
{
	FILE *fp;
	int roll;
	char name[10];
	printf("Enter name and roll\n");
	scanf("%s%d",name,&roll);
	fp=fopen("start.txt","w");
	fprintf(fp,"%s%d",name,roll);
	fclose(fp);
	fp=fopen("start.txt","r");
	fscanf(fp,"%s %d",name,&roll);
	printf("%s%d",name,&roll);
	
	fclose(fp);
	
}
