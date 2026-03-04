#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("enter the vale of n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        
              j=j+2*i-1; 
    }
    printf("%d",j);
    return 0;
}