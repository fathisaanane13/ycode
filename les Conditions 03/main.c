#include <stdio.h>
#include <stdlib.h>
//Write a C program to calculate the sum of two given integer values.
//If the two values ​​are the same, the program should return triple their sum.
int main()
{
    int a,b;

    printf("1/ enter a number:\n");
    scanf("%d",&a);
    printf("2/ enter a number:\n");
    scanf("%d",&b);
    if (a==b)
    printf("the result is : %d",(a+b)*3);
    else
    printf("the result is :%d",a+b);





    return 0;
}
