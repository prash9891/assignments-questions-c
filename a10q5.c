#include<stdio.h>
int main()
{
    int i,a,b,n,HCF;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(i=1;a>1||b>1;)
    {if(a%i==0)
    HCF=1;
    if(b%i==0)
    HCF=1;
    if(HCF==1)
    {
        n=i;  
        HCF=0;
    }
    else
    i++;
}
printf("HCF is %d",n);
return 0;
}