#include <stdio.h>
#include <stdlib.h>
//m/s = km/h * 0.27778
int main()
{
   float  ms,kmh;
    printf("veuillez entrer la distance en ms:");
    scanf("%f",&ms);
    kmh=ms*0.27778;
    printf("la distance en k/h: %f",kmh);



    return 0;
}
