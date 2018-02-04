#include<stdio.h>
int main()
{
	int a[10][10],m,n,t,s,w,l;
	printf("Enter no. of m*n\n");
	int i,j,k;
	scanf("%d%d",&m,&n);
	a[m][n];
	printf("Enter array elements\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int c[n];
	printf("Input 2D array is:\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
		l=0;
	for(i=0;i<m;i++)
	{
		k=0;
	
		s=1;
		w=2;
	
			
		c[l]=a[i][k]+a[i][s] +a[i][w];
		
		l++;
	}
	printf("\n Sum is:\n");
	for(i=0;i<n;i++)
	{
		printf("%3d",c[i]);
	}
}
