#include<stdio.h>
int main()
{
    int i,x,r=0;
    printf("enter a number");
    scanf("%d",&x);
    while(x!=0)
    {r=r*10+(x%10);
        x=x/10;
        
    }
    printf("reverse of the number is %d",r);
return 0;
}