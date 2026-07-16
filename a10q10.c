#include<stdio.h>
int main()
{
    int sum=0,y,n=0,p,d,i,x;
    for(x=1;x<=10000;x++)
    {   y=x;
        n=0;
        while(y)
        {
            y=y/10;
        n++;
        }
        for(sum=0,y=x;y;y=y/10)
        {
            d=y%10;
        for(p=1,i=1;i<=n;i++)
        p=p*d;
        sum=sum+p;
         }
        if(sum==x)
        printf("%d ",x);
       
    } 
    return 0;   
}