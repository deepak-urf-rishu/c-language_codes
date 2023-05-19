#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    (a%4==0)?printf("this is a leap year"):printf("this is not a leap year");
    return 0;
}