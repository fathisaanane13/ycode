#include <stdio.h>
#include <stdlib.h>
//Yards = Km * 1093.61
int main()
{
    float y,k;
    printf("veuillez entrer la distance en yards:\n");
    scanf("%f",&y);
    k=y * 1093.61;
    printf("la distance en km %f\n",k);


    return 0;
}
