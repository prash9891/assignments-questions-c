#include<stdio.h>
int main ()
{
    int i,n,k;
    printf("enter the value of n: ");
    scanf("%d",&n);
    k=n+n;
    for(i=1;i<=k;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    printf("\n");
    return 0;
}