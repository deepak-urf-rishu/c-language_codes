#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("this is an alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("this is a digit");
    }
    else{
        printf("this is a special character");
    }
    return 0;
}
