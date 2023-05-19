#include <stdio.h>

int main()
{
    int l,w,p;
    printf("enter the length of rectangle\n");
    scanf("%d",&l);
    printf("enter the width of rectangle\n");
    scanf("%d",&w);
    p=2*(l+w);
    printf("parameter of rectangle is : %d",p);
    return 0;
}