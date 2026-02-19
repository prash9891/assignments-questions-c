#include<stdio.h>
int main()
{
    
  
int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
    printf("square of %d and %d is %d and %d\n",a,b,a*a,b*b);
      printf("area of rectangle of length %d and width %d is %d",a,b,a*b);
    return 0;
}