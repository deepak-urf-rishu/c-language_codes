#include <stdio.h>
#include <math.h>

int main()
{
    float P,R,T,A;
    printf("Enter the time(in year)\n");
    scanf("%f",&T);
    printf("Enter the initial principal balance\n");
    scanf("%f",&P);
    printf("Enter the annual interest rate\n");
    scanf("%f",&R);
    A=P*(pow((1+R/100),T));;
    printf("Compound Interest: %f",A);
    return 0;
}