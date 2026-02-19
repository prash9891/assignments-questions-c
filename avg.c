#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers to find its average: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("average of %d,%d and %d is %f",a,b,c,(a+b+c)/3.0);
    return 0;
}