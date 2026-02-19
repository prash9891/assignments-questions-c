#include<stdio.h>
int main()
{
    float CP,SP,PROFIT,LOSS;
    printf("Enter cost price and selling price");
    scanf("%d %d",&CP,&SP);
    if(SP>CP)
    {
        PROFIT=SP - CP;
    printf("profit percentage is %0.2f",PROFIT/CP*100);
    }
    else if(CP>SP)
    {
        LOSS=CP - SP;
    printf("loss percentage is %0.2f",LOSS/CP*100);
    }
    return 0;
}