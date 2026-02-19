#include<stdio.h>
int main()
{
    int cp,sp;
    float profit;
    printf("enter cost price and selling price of banana per dazon");
    scanf("%d%d",&cp,&sp);
    profit=(((sp)/12.0)*25)-(((cp)/12.0)*25);
    printf("the profit or loss for 25 bananas are %f ",profit);
    return 0;
}