#include <stdio.h>

int main()
{
    int r,d;
    float cir,a;
    printf("enter the radius of a circle\n");
    scanf("%d",&r);
    d=2*r;
    cir=2*3.14*r;
    a=3.14*r*r;
    printf("diameter of circle  is : %d\n",d);
    printf("circumference of circle is : %f\n",cir);
    printf("area of circle is : %f",a);
    return 0;
}