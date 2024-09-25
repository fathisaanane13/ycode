#include <stdio.h>
#include <stdlib.h>

int main()
{


float c,k;

    printf("veuillez entrer la température en celsius:");
    scanf("%f",&c);
    k=c + 273.15;
    printf(" la temperature en Kelvin %f ",k);
    return 0;

}
