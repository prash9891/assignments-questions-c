#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("sunday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    default:
        printf("invailid");
    }
    return 0;
}