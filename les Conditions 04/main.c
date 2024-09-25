#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 4 : Equation du Deuxième Degré
//Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.
int main()
{
    float a,b,c,delta,x,x1,x2;
    printf("enter the value of a and b and c : \n ");
    scanf("%f%f%f",&a,&b,&c);
    delta = pow(b,2) - (4*a*c);
    if (delta <0)
        printf("dont have a solution");
    else if (delta==0){
        x=(-b)/(2*a);
        printf("the solution is : %f.2f",x);

    }
    else{
        x1 = (-b - sqrt (delta))/(2*a);
        x2 = (-b + sqrt (delta))/(2*a);
        printf("the solution is : %f.2f and %f.2f",x1+x2);

    }





    return 0;
}
