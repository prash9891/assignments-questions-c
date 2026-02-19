#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter a number");
    scanf("%d %d",&a,&x);
    a>x?printf("%d",a):printf("%d",x);
    return 0;
}
