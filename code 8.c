#include <stdio.h>

int main()
{
    int celcius,fahrenheit;
    printf("enter the temperature in fahrenheit\n");
    scanf("%d",&fahrenheit);
    celcius=(fahrenheit-32)*0.5556;
    printf("fahrenheit to celcius=%d",celcius);
    return 0;
}