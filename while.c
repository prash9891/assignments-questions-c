#include<stdio.h>
int main()
{
    int a, i=1;
    printf("enter a number");
    scanf("%d",&a);
    while (i<=a)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}