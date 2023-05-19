#include <stdio.h>

int main()
{
    int m;
    printf("enter the size of an array :");
    scanf("%d",&m);
    int a[m],i;
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    }
    printf("array :");
    for(i=0;i<m;i++){
    printf("%d ",a[i]);
    }
    return 0;
}