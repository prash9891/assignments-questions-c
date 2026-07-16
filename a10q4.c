#include<stdio.h>
int main()
{
    int i,a,b,n,h;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);

    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0&&b%h==0)
        {break;}
        

}
printf("hcf is %d",h);
return 0;
}