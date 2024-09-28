#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [20] , lastname [20],email[100] ;
    int age;
    printf ("name? : \n");
    scanf("%s",name);


    printf ("lastname? : \n");
    scanf("%s",lastname);

    printf ("email? :\n");
    scanf ("%s",email);

    printf ("age?\n");
    scanf ("%d ",age);
    printf("%s %s %s %d\n",name,lastname,email,age);

    return 0;
}
