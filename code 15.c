#include <stdio.h>
#include <math.h>

int main()
{
    float a,area;
    printf("enter a side of equilateral triangle\n");
    scanf("%f",&a);
    area=sqrt(3)/4*pow(a,2);
    printf("area of equilateral triangle is : %f",area);
    return 0;
}