#include <stdio.h>
#define Max(a, b) (a > b ? a : b)
int main()
{
    int t, n, i, total, current, max, l;
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d", &n);
        
        long long int knights[n + 1];
        for(i=0;i<n;i++)
        scanf("%lld",&knights[i]);
     
       total = 0;
        for (i = 0; i < n; i++)
        {
            if (knights[i] == 1) { total++; }
        }
        
        current = 0;
        for (i = 0; i < total; i++)
        {
            if (knights[i] == 1) { current++; }
        }
              
        max = current;
        l = n + total;
      
        for ( ; i < l; i++)
        {
            if (knights[i % n] == 1) { current++; }
            if (knights[i - total] == 1) { current--; }
            max = Max(max, current);
        }
        
        printf("%d\n", total - max);
    }
}

