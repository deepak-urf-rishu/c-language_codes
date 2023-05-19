#include <stdio.h>

int main()
{
  char ch;
  scanf("%c",&ch);
  if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    printf("Given character is an alphabet");
  }
  else{
    printf("Given character is not an alphabet");
  }
    return 0;
}