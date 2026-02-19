#include<stdio.h>
int main()
{
    int i,j=0,n;
    printf("enter the vale of n");
    scanf("%d",&n);
    
    for(i=1;i<=2*n;i++)
    {
        if(i%2!=0)
              j=j+i; 
    }
    printf("%d",j);
    return 0;
}