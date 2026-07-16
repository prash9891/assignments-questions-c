#include<stdio.h>
int main()
{
    int x,y,p,sum=0,d,n=0,i;
    printf("Enter a numbers\n");
    scanf("%d",&x);
    y=x;
    while (y)
    {
        y=y/10;
        n++;
    }
    for(y=x;y;y=y/10)
    {
        d=y%10;
    for(p=1,i=1;i<=n;i++)
    p=p*d;
    sum=sum+p;
    }
    if(sum==x)
    printf("%d is Armstrong number",x);
    else
    printf("%d is not an armstrong number",x);

return 0;
}