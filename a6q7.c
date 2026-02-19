#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf(a>0?"positive":a<0?"negetive":"zero");
    return 0;
}