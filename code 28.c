#include <stdio.h>

int main()
{
  int a,b,c;
  scanf("%d",&a);
  if (a>0) {
    printf("number is positive");
  }
  else if (a<0){
    printf("number is negative");
  }
  else{
    printf("number is zero");
  }
    return 0;
}