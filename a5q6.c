#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>=100 && a<1000)
    printf("given number is a three digit number");
    else
    printf("given number is not a three digit number");
    return 0;
}