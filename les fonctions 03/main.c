#include <stdio.h>
#include <stdlib.h>
struct myinfo{
int age ;
char name;
};
int main()
{
struct myinfo me1;
 me1.age=23;
 me1.name='fathi';
 printf("my name is :%s\n",me1.name);
 printf("my age is :%d\n",me1.age);


    return 0;
}
