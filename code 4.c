#include <stdio.h>

int main()
{
    int a,b,sum,sub,mul,divi,mod;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    divi=a/b;
    mod=a%b;
    printf("addition=%d\n",sum);
    printf("subtraction=%d\n",sub);
    printf("multification=%d\n",mul);
    printf("division=%d\n",divi);
    printf("modulus=%d\n",mod);
    return 0;
}