#include <stdio.h>

int main()
{
    int m;
    printf("enter the size of an array :");
    scanf("%d",&m);
    int a[m],i,c=0,t=0;
    for(i=0;i<m;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        if (i%2==0){
            c++;
        }
        else{
            t++;
        }
    }
    printf("no of odd :%d \n",c);
    printf("no of even :%d \n",t);
    return 0;
}