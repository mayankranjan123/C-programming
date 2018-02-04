#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int N; 
    scanf("%d",&N);
    if(N==2 || N==4)
    {
        printf("Not Weird");
    }
    if(N%2==1)
    {
        printf("Weird");
    }
    if(N==6 || N==8 || N==10 || N==12 ||N==14 ||N==16 || N==18 ||N==20 )
    {
        printf("Weird");
    }
    if(N>20)
    {
        if(N%2==0)
        {
            printf("Not Weird");
        }
    }
    return 0;
}

