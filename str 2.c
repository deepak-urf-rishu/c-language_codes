/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100],c[100];
    int f=0;
    scanf("%s",a);
    int i,len,j=0;
    len=strlen(a);
   /* for(i=0;a[i];i++){
        c[i]=a[i];
    }
    c[i]='\0';*/
 //   printf("%d\n",len);
    for(i=len-1;i>=0;i--,j++){
        b[j]=a[i];
    //   
    printf("%d ",i);
    }
    b[j]='\0';
    i=0;
    while(a[i])
    {
    if (a[i]!=b[i])
    {
        f=1;
        break;
    }
    i++;
    }
    if(f==0)
    printf("YES");
     else
    printf("not");

    return 0;
}
