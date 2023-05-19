#include <stdio.h>

int main()
{
    float _cm,_km,_m;
    printf("enter the length in centimeter\n");
    scanf("%f",&_cm);
    _m=_cm/100;
    _km=_cm/100000;
    printf("cm to m : %f m\n",_m);
    printf("cm to km : %f km",_km);
    return 0;
}