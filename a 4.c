#include <stdio.h>

int main()
{
    int m;
    printf("enter the size of an array :");
    scanf("%d",&m);
    int a[m],i,max,min;
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<m;i++){
        if (a[i]>max){
            max=a[i];
        }
        else if (a[i]<max){
            min=a[i];
        }
    }
    printf("maximum element :%d \n",max);
    printf("minimum element :%d ",min);
    return 0;
}