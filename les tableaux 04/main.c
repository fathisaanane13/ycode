#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    int max;
    int num;
    printf("how many cases do you want");//user add num
    scanf("%d",&num);
    int T[num];//declarite tableaux lcases li fih 3la hsab
    for(i=0;i<num;i++){
        printf("enter number:%d\n",i+1);
    scanf("%d",&T[i]);
    }
    max=T[0];//hna max 3tito lvaleur li kayna f case 0: bach y9arn liya
    for(i=1;i<num;i++){
        if(T[i]>max){//hna ghybda y9arn liya mn case 1
            max=T[i];
        }
    }
        printf("max number is:%d\n",max);//hna result


    return 0;
}
