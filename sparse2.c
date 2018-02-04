#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n,c;
	printf("Enter no of elements in m*n\n");
	scanf("%d%d",&m,&n);
	a[m][n];
	printf("Enter array elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
			
			c++;
		}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	if(c>((m*n)/2))
	{
		printf("Sparse Matrix\n");
		
	}
	else
	{
		printf("Not Sparse Matrix\n");
	}
}
