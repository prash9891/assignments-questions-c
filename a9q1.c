#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("enter the vale of n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
              j=j+i; 
    }
    printf("sum of first %d natural number is %d",n,j);
    return 0;
}