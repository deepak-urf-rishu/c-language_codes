#include <stdio.h>

int main()
{
    int b,h,area;
    printf("enter the base of triangle\n");
    scanf("%d",&b);
    printf("enter the height of triangle\n");
    scanf("%d",&h);
    area=(b*h)/2;
    printf("area of triangle is : %d",area);
    return 0;
}