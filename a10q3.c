#include<stdio.h>
int main()
{
    int a=-1,b=1,x,c,i;
    printf("enter a number");
    scanf("%d",&x);
    for ( i = 0;   ;i++)
    {
        c=a+b;
        if (c==x)
        {
            printf("%d is %d term in this series",x,i);
            break;
        }
        if(c>x)
        {
            printf("%d is not in this series",x);
            break;
        }
        a=b;
        b=c;
    
}
return 0;
}