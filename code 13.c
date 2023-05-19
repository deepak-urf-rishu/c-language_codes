#include <stdio.h>

int main()
{ 
    int a,b,c;
    printf("enter first angle of a triangle\n");
    scanf("%d",&a);
    printf("enter second angle of a triangle\n");
    scanf("%d",&b);
    c=180-(a+b);
    printf("the third angle of triangle is: %d",c);
}
}