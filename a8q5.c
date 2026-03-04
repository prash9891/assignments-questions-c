#include<stdio.h>
int main ()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    
    while (n)
    {
       printf("%d ",n*2-1);
       n--;
    }
    
    printf("\n");
    return 0;
}