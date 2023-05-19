#include <stdio.h>

int main()
{
    int m;
    printf("enter the size of an array :");
    scanf("%d",&m);
    int a[m],i,b[m];
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("copied array: ");
    for(i=0;i<m;i++){
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    return 0;
}