#include<stdio.h>
int main()
{
    long i,n,k=1;
    printf("enter th number you want factorial of");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        k=k*i;
    }
    printf("%ld",k);
}