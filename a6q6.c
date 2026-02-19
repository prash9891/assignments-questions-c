#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
    printf("it is divisible by 7 and 3");
    else
    printf("it is not divisible by 7 and 3");
    return 0;
}