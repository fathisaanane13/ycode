#include <stdio.h>
#include <stdlib.h>
//Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :

//1er nombre : pondération 2
//2ème nombre : pondération 3
//3ème nombre : pondération 5
int main()
{
    int A;
    int B;
    int C;
    int R;
    printf("enter nombre 1):");
    scanf("%d",&A);
    printf("enter nombre 1):");
    scanf("%d",&B);
    printf("enter nombre 1):");
    scanf("%d",&C);
    A =A*2;// hna A drbto f lmo3&mol dyalow3awdt had chy lta7t
    B=B*3;
    C=C*5;
    R=A+B+C/10;//hna jma3t kolchi  w 9smto 3la 10 Lihoma lmjmo3 dyal lmo3amilat.
    printf("the result is :%d\n",R);




    return 0;
}
