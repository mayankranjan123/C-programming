#include<stdio.h>
int main()
{
	FILE *fp;
	char ch[10],p,q;
	int m=0,t=0;
	fp=fopen("try.txt","r");

//	fputs("MAyank Ranjan",fp);

while ((p=getc(fp)) != EOF)
    {
        //Count whenever new line is encountered
      
          if(p==' ')
        {
        	t++;
		}
		else  if (p == '\n')
        {
            m = m + 1;
        }
        
      
       
      
    }
    
	printf("No. of lines are %d: \n",m);
	printf("No. of spaces are %d: \n",t);
	fclose(fp);
}
