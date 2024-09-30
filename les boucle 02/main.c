#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int i,n,s;

    printf("enter a number positive\n");
    scanf("%d",&n);

        s=1;
        for(i=1;i<=n;i++){
            s=i*s;
printf("Factorial of the Number is :%d \n",s);
     }
    // printf("Factorial of the Number is :%d \n",s);
    return 0;
}
