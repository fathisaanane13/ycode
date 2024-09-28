#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,i;
     printf("enter a number:\n");
     scanf("%d",&n);
    int tab[n];
     for(i=0;i<n;i++){
     printf("number%d:\n",i+1);
     scanf("%d",&tab[i]);
     }
    return 0;
}
