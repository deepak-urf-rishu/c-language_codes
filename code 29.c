#include <stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
  if (a/5 && a/11) {
    printf("number is divisible by 5 or 11");
  }
  else{
    printf("number is not divisible by 5 or 11");
  }
    return 0;
}