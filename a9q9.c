#include<stdio.h>
int main()
{
    int i,x=1,a,b,flag=0;
    printf("enter a number");
    scanf("%d%d",&a,&b);
    for(i=2;a>1||b>1;)
    {
        if(a%i==0)
        {a=a/i;
        flag=1;}
        if(b%i==0)
        {b=b/i;
        flag=1;}
        if (flag==1)
        {
            x=x*i;
            flag=0;
         }
         else
         i++;
    }
    printf("LCM is %d",x);
    return 0;
}
