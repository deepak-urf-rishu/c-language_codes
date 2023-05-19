#include <stdio.h>

int main()
{
    int m;
    printf("enter the size of an array :");
    scanf("%d",&m);
    int a[m],i,c=0;
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    {
        if (a[i]<0)
        c++;
    }
    printf("Total no. of negative elements: %d",c);
    return 0;
}