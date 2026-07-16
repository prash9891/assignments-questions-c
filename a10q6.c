#include<stdio.h>
int main()
{
    int a=2,b=100,i,x;
    for(x=a;x<=b;x++)
    {
        for(i=2;i<100;i++)
    {
        if(x%i==0)
       break;
    }
    if(i==x)
    printf("%d ",x);
}

    return 0;

}