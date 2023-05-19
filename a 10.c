#include <stdio.h>

int main()                                                              
{
    int n;
    printf("enter the size of an array :");
    scanf("%d",&n);
    int a[n],i,pos;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position of an element for delete it :");
    scanf("%d",&pos);
    for(i=pos;i<n;i++){
    a[i-1]=a[i];
    }
    n--;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}