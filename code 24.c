#include <stdio.h>

int main()
{
    char c;
    printf("Enter \n");
    scanf("%c",&c);
    (c>='A' && c<='Z') || (c>='a' && c<='z')?printf("this is an alphabet"):printf("this is not an alphabet");
    return 0;
}