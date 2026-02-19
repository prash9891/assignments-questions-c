#include<stdio.h>
int main()
{
    int a,i,s=0;
    printf("enter any numbers (last one should be zero)");
    while(1)//since there is no upper lilit for this so you can take any true statement
    { 
      
      scanf("%d",&a);
      if(a==0)     
      break;
      s=s+a;
    }
    
    printf("sum %d",s);
   return 0;
}     