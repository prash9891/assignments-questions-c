#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of the sides");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    printf("triangle is valid");
    else
    printf("triangle is invalid");
    return 0;
    
} 