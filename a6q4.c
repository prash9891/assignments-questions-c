#include<stdio.h>
int main()
{
    char a;
    printf("enter");
    scanf("%c",&a);
    
    if(a>='A' && a<='Z')
    printf("it is uppercase letter\n");
    if(a>='a' && a<='z')
    printf("it is lower case letter\n");
    else
    printf("not an alphabet");
    
    return 0;
}