#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [200] , lastname [200],email[200] ,sexe[200] ;
    int age;
    printf ("whats your name? : ");
    scanf("%s",name);


    printf ("whats your lastname? : ");
    scanf("%s",lastname);

    printf ("whats your email? :");
    scanf ("%s",email);

    printf("your sexe?");
    scanf("%s",sexe);

    printf ("whats your age?");
    scanf ("%d",&age);
    printf("%s %s %s %s %d\n",name,lastname,email,sexe,age);

    return 0;
}
