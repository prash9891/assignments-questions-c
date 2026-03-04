#include<stdio.h>
int main()
{
    int a=5,b=1;
    l1:
    printf("%d*%d=%d\n",a,b,a*b);
    b++;
    if( b <= 10 )
    {
        goto l1;
    }
    return 0;
}