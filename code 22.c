#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    (a%2==0)?printf("No. is even"):printf("No. is odd");
    return 0;
}