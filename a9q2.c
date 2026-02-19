#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("enter the vale of n");
    scanf("%d",&n);
    
    for(i=1;i<=2*n;i++)
    {
        if(i%2==0)
              j=j+i; 
    }
    printf("sum of frst %d even natural nubers is %d",n,j);
    return 0;
}