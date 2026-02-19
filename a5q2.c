#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%5==0)
    printf("a is divisible by 5");
    if(a%5!=0)
    printf("a is not divisibe by 5");
    return 0;
}