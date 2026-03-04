#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while (n)
    {
        n=n/10;
        i++;
        
        }
        printf("number of digits in given number is%d",i);
        
        return 0;
    
}