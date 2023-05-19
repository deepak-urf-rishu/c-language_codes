#include <stdio.h>

int main()                                                              
{
    int n,m;
    printf("enter the size of first array :");
    scanf("%d",&n);
    printf("enter the size of second array :");
    scanf("%d",&m);
    int a[n],i,j,b[m],c[100],k=0,l;
    for(i=0;i<n;i++){
        printf("enter the first array");
        scanf("%d",&a[i]);
    }
    for(l=i;l<m+i;l++){
        printf("enter the second  array");
        scanf("%d",&b[l]);
    }
    for(j=0;i<n;i++){
        if(i>4){
            c[i]=b[k];
            k++;
        }
        c[i]=a[i];
    }
    printf("%d",c[i]);
    return 0;
}