#include <stdio.h>

int main()
{
    int m;
    printf("enter the size of an array :");
    scanf("%d",&m);
    int a[m],i,sum=0;
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array :%d",sum);
    return 0;
}