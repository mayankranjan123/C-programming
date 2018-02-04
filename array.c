#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j,k,sum;
	printf("Enter m*n \n");
	scanf("%d%d",&m,&n);
	a[m][n];
	int b[m][n];
	printf("Enter array elements for 1st array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter array elements for 1st array\n");
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("1st array is:\n");
	for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
			printf("%3d",a[i][j]);
	}
	printf("\n");
}

	printf("2nd array is:\n");
	
	for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
			printf("%3d",b[i][j]);
	}
	printf("\n");
}
printf("Multiplication is:\n");
	int c[m][n];

for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			for(k=0;k<n;k++)
			{
				
				sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
			
			}
		
			
}

}
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
			printf("%3d",c[i][j]);
	}
	printf("\n");
}


}
