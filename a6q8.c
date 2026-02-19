#include<stdio.h>
int main()
{
    char a;
    printf("enter");
    scanf("%c",&a);
    printf("%d\n",a);
    if(a>='0' && a<='9')
    printf("%d is a digit",a);
    else if(a>='A' && a<='Z')
    {printf("%d is a upper case letter",a);}
    else if(a>='a' && a<='z')
    {printf("%d is a lower case letter",a);}
    else
    printf("special character");
    return 0;

}