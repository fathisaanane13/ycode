#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [20] , lastname [20],email[100] ,sexe[20] ;
    int age;
    printf ("whats your name? : ");
    scanf("%s",name);


    printf ("whats your lastname? : ");
    scanf("%s",lastname);

    printf ("whats your email? :");
    scanf ("%s",email);

    printf("your sexe?");
    scanf("%s",sexe);

    printf ("whats your  age?");
    scanf ("%d",&age);
    printf("%s %s %s %s %d\n",name,lastname,email,sexe,age);

    return 0;
}
