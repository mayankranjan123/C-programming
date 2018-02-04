#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		
		{
			if(i<j)
			{
			
			printf(" ");
		}
		else
		{
			printf("%d",j);
		}
		
		}
		printf("\n");
	}
}
