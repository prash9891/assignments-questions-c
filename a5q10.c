#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    printf(a>b && a>c?"%d",a:b>c && b>a?"%d",b:"%d",c);
    return 0;
}