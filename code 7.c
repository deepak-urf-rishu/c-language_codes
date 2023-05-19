#include <stdio.h>

int main()
{
    int celcius,fahrenheit;
    printf("enter the temperature in celcius\n");
    scanf("%d",&celcius);
    fahrenheit=(celcius*1.8)+32;
    printf("celcius to fahrenheit=%d",fahrenheit);
    return 0;
}
