#include <stdio.h>

int main()                                                              
{
    int i,j,n,m;
    printf("enter the row of 2d array");
    scanf("%d",&n);
    printf("enter the column of 2d array");
    scanf("%d",&m);
    int a[n][m];
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}