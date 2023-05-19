#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],d;
    scanf("%s",a);
    int i;
    for(i=0;a[i];i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",b);

    return 0;
}