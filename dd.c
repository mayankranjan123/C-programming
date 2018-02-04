    #include<stdio.h>
    #include<math.h>
    int main()
    {
        
    int l,i,q,a;
    
    scanf("%d",&l);
    long long int n,s;
    long int b[l],t,sum;
    for(i=0;i<l;i++)
    scanf("%li",&b[i]);
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%lli",&n);
    sum=1;t=0;s=0;
    while(n>0)
    {
        a=n%2;
    if(a!=0)
    {
    s=s+pow(2,t);
    sum=(sum+b[s%l])%1000000007;
    }
    
    t++;
    n=n/2;
    }
    printf("%li\n",sum);
    }
    return 0;
    }
