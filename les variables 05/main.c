#include <stdio.h>
#include <stdlib.h>
//C < 0 : Solide
//0 <= C < 100 : Liquide
//C >= 100 : Gaz
int main()
{
    int temperature ;
    printf("temperature of the water ? ");
    scanf ("%d",&temperature);
    if (temperature < 0){
            printf("state of the water is Solide ");

    }
    if (0 <= temperature < 100){
            printf("state of the water is Liquide ");

    }
    if (temperature >= 100){
            printf("state of the water is Gas ");

    }


    return 0;
}
