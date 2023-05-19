int main()                                                              
{
    int i,j,n,m;
    printf("enter the row of 2d array");
    scanf("%d",&n);
    printf("enter the column of 2d array");
    scanf("%d",&m);
    int a[n][m],sum[100][100],b[n][m];
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of two 2d array\n");
    for(i=0;i<n;i++){
        for (j=0;j<m;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}