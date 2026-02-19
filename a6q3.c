#include<stdio.h>
int main()
{
    float M,S,SST,H,E;
    printf("Enter marks of student in 5 subjects out of 100");
    scanf("%f %f %f %f %f",&M,&S,&SST,&H,&E);
    if (M>=33&&S>=33&&SST>=33&&H>=33&&E>=33)
    printf("Candidate passed the exam ");
    else
    printf("Candidate is failed in exam ");
    return 0;
    
}
