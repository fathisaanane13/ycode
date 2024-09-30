#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int min;
    int num;
    printf("enter how many cases you want:\n");//user add num
    scanf("%d",&num);
    int tab[num];//declarite tableaux lcases li fih 3la hsab
    for(i=0;i<num;i++){
    printf("enter number %d :\n",i+1);
    scanf("%d",&tab[i]);
    }
    min=tab[0];//hna min 3tito lvaleur li kayna f case 0: bach y9arn liya
    for(i=1;i<num;i++){
    if(min<tab[i]){//hna ghybda y9arn liya mn case 1
        min=tab[i];
    }}
    printf("min number is:%d\n",min);//hna result

    return 0;

}
