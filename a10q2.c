#include<stdio.h>
int main()
{
    int i,a=0,b=1,n,l;
    printf("enter");
    scanf("%d",&n);
    
    if(n==0)
    printf("0");
    else if(n==1)
    printf("0 1 ");
    
    else
    {   printf("0 1 ");
        for(i=3;i<=n;i++)
        {
        l=a+b;
        a=b;
        b=l;
        printf("%d ",b);
        }
    }
}