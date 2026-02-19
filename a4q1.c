#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter a three digit number");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=b+d+e;
    printf("sum of the digits are %d",f);
    return 0;
}