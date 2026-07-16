#include<stdio.h>
int main()
{
    int a,b,i,x;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    
    for(x=a;x<=b;x++)
    {
    for(i=2;i<=b;i++)
    {
        if(x%i==0) 
        break;
        }
        if(i==x)
        printf("%d ",x);

    }
    return 0;
}