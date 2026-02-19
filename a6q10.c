#include<stdio.h>
int main()
{
    int a;
    printf("enter the number of month");
    scanf("%d",&a);
    if(a==1)
    printf("%d month has 31 days",a);
    else if(a==2)
    printf("%dth month has 28 days",a);
    else if(a==3)
    printf("%d month has 31 days",a);
    else if(a==4)
    printf("%d month has 30 days",a);
    else if(a==5)
    printf("%d month has 31 days",a);
    else if(a==6)
    printf("%d month has 30 days",a);
    else if(a==7)
    printf("%d month has 31 days",a);
    else if(a==8)
    printf("%d month has 31 days",a);
    else if(a==9)
    printf("%d month has 30 days",a);   
    else if(a==10)
    printf("%d month has 31 days",a);
    else if(a==11)
    printf("%d month has 30 days",a);
    else if(a==12)
    printf("%d month has 31 days",a);
    return 0;

}