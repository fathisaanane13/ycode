#include <stdio.h>

int main()
{
int i,num,s;
printf("enter a number :\n");
scanf("%d",&num);
s = 0;
for(i=1;i<=num;i++){
s=s+i;


printf(" %d + %d = %d\n",num,i,s);
}


  return 0;
}
