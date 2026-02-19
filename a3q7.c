#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values and a and b\n");
    scanf("%d %d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("swaped values are a and b are %d and %d",a,b);
    return 0;
}