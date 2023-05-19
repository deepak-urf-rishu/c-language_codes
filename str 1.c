#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],d;
    scanf("%s",a);
    scanf("%c",&d);
    scanf("%s",b);
    int i=0,len,len2;
    len=strlen(a);
    len2=strlen(b);
    if(len>len2)
    printf("first string's length  is greater");
    else
    printf("second string's length  is greater");

    return 0;
}