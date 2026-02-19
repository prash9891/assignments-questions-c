#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%2==0 && a%3==0)
    printf("it divisible by 2 and 3");
    else
    printf("it is not divisible by 2 and 3");
    return 0;
}