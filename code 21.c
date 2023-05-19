#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    a>b?printf("%d is maximum",a):printf("%d  is maximum",b);
    return 0;
}
