#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year number");
    scanf("%d",&year);
    if(year%100==0)
    {
        //leap year
        printf(year%400?"not a leap year":"a leap year");
    }
    else
    {
    //non leap year
    year%4?printf("%d is not leap a year",year):printf("%d is a leap year",year);
}
}