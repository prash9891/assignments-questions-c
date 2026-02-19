#include<stdio.h>
int main()
{
    int i,n,k=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k+i*i;
    }
    printf("sum of first %d number of squares is %d",n,k);
    return 0;
}