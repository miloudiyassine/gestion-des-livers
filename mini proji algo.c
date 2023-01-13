#include <stdio.h>
int main (){
    struct livres {
    int isbn;
    char titre[900];
    char nom[900];
    char prenom[900];
    int date_pub;
    char maison_pub[900];
    };
    struct livres lv_1[3];
    int i;
    for(i=1;i<=2;i++){
        printf("Entrer le ISBN de livres : \t");
        scanf("%d",&lv_1[i].isbn);
        printf("Entrer le Titre de livres : \t");
        scanf("%s",&lv_1[i].titre);
        printf("Entrer le Nom de Autheurs : \t");
        scanf("%s",&lv_1[i].nom);
        printf("Entrer le Prénom de Autheurs : \t");
        scanf("%s",&lv_1[i].prenom);
        printf("Entrer le Date de Publication : \t");
        scanf("%d",&lv_1[i].date_pub);
        printf("Entrer le Maison de Publication : \t");
        scanf("%s",&lv_1[i].maison_pub);
    }
    printf("\n---------------------------------------------------\n");
    for(i=1;i<=2;i++){
        printf("ISBN : %d | Titre : %s | Nom de autheurs : %s | Prénom de autheurs : %s | Date de publication : %d | Maison de publication : %s ",lv_1[i].isbn,lv_1[i].titre,lv_1[i].nom,lv_1[i].prenom,lv_1[i].date_pub,lv_1[i].maison_pub);
    }
    return 0;
}
