#include<stdio.h>
int main()
{
    float a;
    printf("Enter a amount in inr to conert in into usd");
    scanf("%f",&a);
    a=a/84.23;
    printf("Amount in usd is %0.2f$",a);
    return 0;
}