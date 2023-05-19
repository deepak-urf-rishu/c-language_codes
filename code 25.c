#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a number\n");
    scanf("%d",&a);
    printf("Enter a number\n");
    scanf("%d",&b);
    printf("Enter a number\n");
    scanf("%d",&c);
    (a>b && a>c)?printf("%d is maximum",a):(b>a && b>c)?printf("%d is maximum",b):printf("%d is maximum",c);
    return 0;
}