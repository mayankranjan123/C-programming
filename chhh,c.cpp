#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k=0,d=0,k1=100002,k2=100002,d1;
        scanf("%d",&n);
        int str[100002];
        for(int i=0;i<n;i++){
            scanf("%d",str+i);
        }
        for(int i=0;i<n;i++){
            if(str[i]==1)
                k++;
        }
        for(int i=0;i<k;i++){
            if(str[i]==0){
                d++;
            }
        }
        for(int i=0;i<n;i++){
            if(d<k1){
               k1=d;
            }
            if(str[i]==0){
               d--;
            }
            if(str[(i+k)%n]==0){
               d++;
            }
        }
        printf("%d\n",k1);
    }
    return 0;
}
