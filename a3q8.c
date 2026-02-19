#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("the swaped valus of a and b are %d and %d",a,b);
    return 0;
}