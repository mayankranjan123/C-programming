#include<stdio.h>
int main()
{
    
    int n,i,j,k,l=0,t,p,s,temp=0,count=0;
    printf("Enter no. of array elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	j=i+1;k=j+1;
		if(a[i]==a[j] && a[j]!=a[k])
		{
			if(a[k]!=a[k+1])
			{
				temp=a[k+1];
				a[k+1]=a[k];
				a[k]=temp;
				
				if(a[k]==a[k+3])
				{
					l=a[k+1];
					a[k+1]=a[k+3];
					a[k+3]=l;
					count++;
					printf("%d",count);
				}
				
					}
					
						
		}
		
	}
	for(i=0;i<8;i++)
	{
		printf("%d",a[i]);
	}
}
