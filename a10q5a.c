#include<stdio.h>
int main()
{
    int i,a,b,n,H;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        H=i;
    }
    if(H==1)
    {
        printf("The numbers are co-prime\n");
    }
    else
    {
        printf("The numbers are not co-prime\n");
    }
    return 0;
}