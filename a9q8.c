#include<stdio.h>
int main()
{
    int i,x;
    printf("enter a number");
    scanf("%d",&x);
    for ( i = 2; i <= x-1; i++)
    {
        if(x%i==0)
        break;
        
    }  
    if (i==x)
        {
            printf("prime");
        }
        else
        {
            printf("not prime");
        }  
        return 0;
    }
    