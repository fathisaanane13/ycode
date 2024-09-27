#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int a,n,s;

    printf("enter a number positive\n");
    scanf("%d",&n);

        s=1;
        for(a=1;a<=n;a++){
            s=a*s;

     }
     printf("Factorial of the Number is :%d \n",s);
    return 0;
}
