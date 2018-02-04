#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int T=0;
    int i=0;
    
   
      char *S;
    printf("Enter Test case\n");
    scanf("%d",&T);
      while(T--)
      {
	  
      scanf("%s",S);
    int length = (int)strlen(S); 
    for (i = 0; i < length;i+=2) 
    {

       printf("%c", S[i]);

    }
    printf(" ");
    for (i = 1; i < length;i+=2) 
    {

       printf("%c", S[i]);

    }
    

        
   }
    
    return 0;
}

