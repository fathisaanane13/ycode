#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if (n%2 == 0 )
        printf("%d the number is even :",n);
    else
        printf(" the number is odd .");


    return 0;
}
