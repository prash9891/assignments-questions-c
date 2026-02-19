#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter date in give format DD/MM/YYYY :");
    scanf("%d/%d/%d",&a,&b,&c);
    printf("Day-%d Month-%d Year-%d",a,b,c);
    return 0;
}