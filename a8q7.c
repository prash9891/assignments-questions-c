#include<stdio.h>
int main ()
{
    int i,n,k;
    printf("enter the value of n: ");
    scanf("%d",&n);
    k=n+n;
    for(i=k;i>=1;i--)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
    printf("\n");
    return 0;
}