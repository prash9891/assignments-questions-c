#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter a number");
    scanf("%d %d",&a,&x);
    if(a>x)
    printf("%d",a);
    else
    printf("%d",x);
    return 0;
}