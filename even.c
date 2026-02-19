#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a/2*2==a)
    printf("given number is even");
    else 
    printf("given number is odd");
    return 0;
}