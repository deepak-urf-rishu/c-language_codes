#include <stdio.h>
#include <math.h>

int main()
{ 
    int a,b,t;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the power of number\n");
    scanf("%d",&b);
    t=pow(a,b);
    printf("your answer:%d",t);
 
}