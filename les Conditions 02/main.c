#include <stdio.h>
#include <stdlib.h>

int main()
{
    char l ;
    printf("enter a character :");
    scanf("%c",&l);
    switch (l){
        case 'a' : printf("vowel");
        break;
        case 'e' : printf("vowel");
        break;
        case 'i' : printf("vowel");
        break;
        case 'o' : printf("vowel");
        break;
        case 'u' : printf("vowel");
    default : printf("the character is not vowel");


    }

    return 0;
}
