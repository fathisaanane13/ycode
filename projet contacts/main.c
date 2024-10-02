#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define MAX 50
#define MAX_NUM  15


typedef struct {
    char name[MAX];
    char phone[MAX_NUM];
    char email[MAX];
} Contact;

Contact contacts[MAX_CONTACTS];
int count = 0;
void ajouter_contact(int a) {

    if (count >= MAX_CONTACTS) {
        printf("Le carnet de contacts est plein.\n");
        return;
    }
    for(int i=0 ;i<a;i++){
    Contact nouv_contact;

    printf("Entrez le nom du contact: ");
    scanf(" %s", nouv_contact.name);

    printf("Entrez le num de tele: ");
    scanf(" %s", nouv_contact.phone);

    printf("Entrez email: ");
    scanf(" %s", nouv_contact.email);

    contacts[count] = nouv_contact;
    count++;
    printf("Contact ajouter.\n");
    }
}
void modifier_contact() {
    char name[MAX];
    int i;

    printf("Entrez le nom du contact pour modifier: ");
    scanf(" %s", name);

    for (i = 0; i <count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("Entrez le nouveau num de tele: ");
            scanf(" %s", contacts[i].phone);

            printf("Entre la nouvelle  email: ");
            scanf(" %s", contacts[i].email);
            printf("Contact modifier avec succès.\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}
void supprimer_contact() {
    char name[MAX];
    int i,j;

    printf("Entrez le nom du contact pour supprimer: ");
    scanf(" %s", name);

    for (i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            for (int j=i; j<count; j++){
        contacts[j] = contacts[j + 1];
    }
        count--;
        printf("Contact supprimer \n");
    } else {
        printf("pas de Contact avec succès. \n");
    }
    return;
}}
void rechercher_contact() {
    char name[MAX];
    int i;

    printf("Entrez le nom du contact pour rechercher: ");
    scanf(" %s", name);

    for (i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, name) == 0) {
            printf("nom: %s\n", contacts[i].name);
            printf("Tele: %s\n", contacts[i].phone);
            printf("email: %s\n", contacts[i].email);
            return;
        }
    }
    printf("Contact non trouvé.\n");
}
void afficher_contacts() {

    if (count == 0) {
        printf("Aucun contact a afficher.\n");
        return;
    }


    for (int i = 0; i < count; i++) {
        printf("Nom: %s\n", contacts[i].name);
        printf("Tele: %s\n", contacts[i].phone);
        printf("email: %s\n", contacts[i].email);
        printf("----------------------\n");
    }
}
int main() {
    int opt;

    do {
        printf("1). Ajouter un contact\n");
        printf("2). Modifier un contact\n");
        printf("3). Supprimer un contact\n");
        printf("4). Rechercher un contact\n");
        printf("5). Afficher tous les contacts\n");
        printf("0). Quitter\n");
        printf("Choisisser une option: ");
        scanf("%d", &opt);

        switch (opt) {
            case 1:{
            int number;
            printf("combien de contact vous avez ajouter?");
            scanf("%d",&number);
                ajouter_contact(number);}
                break;
            case 2:
                modifier_contact();
                break;
            case 3:
                supprimer_contact();
                break;
            case 4:
                rechercher_contact();
                break;
            case 5:
                afficher_contacts();
                break;
            case 0:
                printf("au revoir...\n");
                break;
            default:
                printf("Option invalide. .\n");
        }

    } while (opt != 0);

    return 0;
}
