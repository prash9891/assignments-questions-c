#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("a is positive");
    }
    if(a<=0)
    {
    printf("a is non postitive");
    }
    return 0;
}