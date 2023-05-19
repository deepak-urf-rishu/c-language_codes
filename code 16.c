#include <stdio.h>

int main()
{ 
    int a,b,c,d,e,total,t;
    float u,v;
    printf("enter first subject marks\n");
    scanf("%d",&a);
    printf("enter second subject marks\n");
    scanf("%d",&b);
    printf("enter third subject marks\n");
    scanf("%d",&c);
    printf("enter fourth subject marks\n");
    scanf("%d",&d);
    printf("enter fifth subject marks\n");
    scanf("%d",&e);
    printf("enter Total marks of exam\n");
    scanf("%d",&t);
    total=(a+b+c+d+e);
    u=(total/5);
    v=total*100/t;
    printf("total: %d \n",total);
    printf("average: %f \n",u);     
    printf("percentage: %f",v);
}