#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100
#define maxchar 30

typedef struct{
int id;
char Nom[maxchar];
char Prenom[maxchar];
char Telephone[maxchar];
char EMAIL[maxchar];
char Age[maxchar];
char Statut[maxchar];
char Date[maxchar];

}reservation;


struct reservation totalreserve[max];
int total = 0;
int id_counter = 1;

void info_pardef (){
    const char prenoms [10][20]={
    "fathi","marwa","hamza","khadija","abdllah",
    "ahmed","hajar","fatima","allaa","karim"
    };
     const char noms [10][20]={
    "saanane","rawi","mosalam","aborabia","bzouzi",
    "sanaa","lehrach","ziouan","rouasi","rami"
    };
     const char telephones [10][20]={
    "0636271879","0578987654","0678695754","0771876543","0609897654",
    "0687908765","0678654543","0789876765","0778763432","0509876754"
    };
     const char emails [10][20]={
    "fathi@gmail.com","marwa@gmail.com","hamza@gmail.com","khadija@gmail.com","abdllah@gmail.com",
    "ahmed@gmail.com","hajar@gmail.com","fatima@gmail.com","allaa@gmail.com","karim@gmail.com"
    };
     const char age [10][20]={
    "23","20","19","18","25",
    "44","31","11","10","33"
    };
     const char statuts [10][20]={
    "validé","reporté","validé","reporté","validé",
    "traité","traité","annulé","validé","annulé"
    };
     const char date [10][20]={
    "02/02/2024","03/02/2024","04/02/2024","05/02/2024","06/02/2024",
    "07/02/2024","08/02/2024","09/02/2024","10/02/2024","11/02/2024"
    };
    for(int i=0 ; i < 10&&total<100 ; i++){
        totalreserve[total].id=idcounter;
        strcpy(totalreserve[total].Nom,noms[i]);
        strcpy(totalreserve[total].Prenom,prenoms[i]);
        strcpy(totalreserve[total].Telephone,telephones[i]);
        strcpy(totalreserve[total].EMAIL,emails[i]);
        strcpy(totalreserve[total].Age,age[i]);
        strcpy(totalreserve[total].Statut,statuts[i]);
        strcpy(totalreserve[total].Date,date[i]);
        total++;
    }
    printf("+++10 reservations ajouter par defaut+++")
}

void ajouter_reserve(int a){
if (totalreserve>=max){
    printf("!!!le carnet de reservation est plein!!!\n");
    return;
}
for (int i = 0;i < a;i++){
    reservation nouv_reserve;
    printf("Entrez le nom de le patient\n");
    scanf("%s",nouv_reserve.Nom);
    printf("Entrez le prenom de le patient\n");
    scanf("%s",nouv_reserve.prenom);
    printf("Entrez le num telephone de le patient\n");
    scanf("%s",nouv_reserve.Telephone);
    printf("Entrez l'Age de le patient\n");
    scanf("%s",nouv_reserve.Age);
    printf("Entrez La date de reservation\n");
    scanf("%s",nouv_reserve.Date);
    printf("Entrez le statut  de reservation\n");
    scanf("%s",nouv_reserve.Statut);

    totalreserve[total]= nouv_reserve;
    total++;
    id++;
    printf("+++reservation ajouter avec succes+++\n");
}
}
void modifier_suprimer(){
int i,j,opt,S,M;
char name[maxchar];
if (total == 0) {
        printf("Le carnet de reservation est vide.\n");
        return;
    }


    printf("entrez votre choix.\n");
    printf("1)pour modifier:\n");
    printf("2)pour suprimer:\n");
    scanf("%d",&opt);
    if(opt==1){
    printf("Entrez id de le patient que vous souhaitez modifier .\n");
    scanf("%d",&id);

    for(i=0;i<total;i++){
        if(strcmp(totalreserve[i].id,id)==0){

        printf("entrez nouveau nom");

        char newemail[20];
        scanf("%s",newemail);
        strcpy(totalreserve[i].EMAIL,newemail);

         printf("entrez nouveau nom");

        char newnumber[20];
        scanf("%s",newnumber);
        strcpy(totalreserve[i].Telephone,newnumber);
        }



    }


}

            }




}





int main()
{

    return 0;
}
