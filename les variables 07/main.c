#include <stdio.h>
#include <stdlib.h>
//�crivez un programme en C pour calculer la moyenne pond�r�e de trois nombres donn�s par l'utilisateur avec les pond�rations suivantes :

//1er nombre : pond�ration 2
//2�me nombre : pond�ration 3
//3�me nombre : pond�ration 5
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
