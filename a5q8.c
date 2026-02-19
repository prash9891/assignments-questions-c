#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a, b and c from quadratic equation");
    scanf("%d %d %d",&a,&b,&c);
    int discriminent=b*b-4*a*c;//you have to dicleare it afer taking input from user
    if(discriminent>0)
    printf("roots are real and distinct");
    else if(discriminent<0)
    printf("roots are imaginary");
    else 
    printf("roots are real and equal");
    return 0;
}

    

