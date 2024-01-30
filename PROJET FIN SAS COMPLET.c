#include <stdio.h>

typedef struct {
    char description[40];
    int annee_d_echeance;
    int priorite;
} tache;

tache T[100];                         // liste des taches
int nbretaches, i, j, pos;            // variables globales

/// MENU
void afficherMenu() {
    printf("1. ajouter une tache\n");
    printf("2. afficher liste des taches\n");
    printf("3. supprimer une tache\n");
    printf("4. modifier une tache\n");
    printf("5. trier les taches par annee croissante\n");
    printf("6. trier les taches par annee decroissante\n");
    printf("7. filtrer par priorite \n");
    printf("entrer votre choix : ");
}

/// AJOUT
void ajouterTache() {
    if (nbretaches < 100) {         // nbre de taches inf a la taille du tab
        printf("decrire la tache : ");                
        scanf("%s", &T[nbretaches].description);

        printf("entrer l annee d echeance : ");
        scanf("%d", &T[nbretaches].annee_d_echeance);

        printf("entrer la priorite : ");
        scanf("%d", &T[nbretaches].priorite);

        nbretaches++;                          // increm du nbretaches apres l ajout d une nouvelle tache
        printf("tache ajoutee avec succes.\n");
    } else {                       //if nbretache() > 100
        printf("erreur.\n");
    }
}

/// AFFICHAGE
void afficherTaches() {
    if (nbretaches == 0) {
        printf("la liste des taches est vide.\n");
    } else {                     // if (nbretaches != 0)
        printf("la liste des taches est  :\n");
        for (i = 0; i < nbretaches; i++) {
            printf("%s %d %d\n", i + 1, T[i].description, T[i].annee_d_echeance ,T[i].priorite);
        }
    }
}

/// SUPRESSION
void supprimerTache() {
    if (nbretaches == 0) {
        printf("la liste des taches est vide.\n");
    }

    printf("entrer la position de tache a supprimer : ");
    scanf("%d", &pos);

    if (pos >= 1 && pos <= nbretaches) {          //  on peut fabire if (pos>0 || pos<nbretaches )
        for (i = pos - 1; i < nbretaches - 1; i++) {
            T[i] = T[i + 1];     //remplacer la tache par la suivante
        }
        nbretaches--;   //decrem du nbretaches apres supression
        printf("tache supprimee de la liste.\n");
    } else {        
        printf(" erreur :vous avez donner une position invalide.\n");
    }
}
/// MODIFICATION

void modifierTache() {
    int indice;                  // indice de la tache
    printf("Entrer l indice de la tache que vous voulez modifier : ");
    scanf("%d", &indice);

    if (indice >= 1 && indice <= nbretaches) {
        printf("entrer la modification de la description : ");  
        // modif des caracteristiques
        scanf("%s", &T[indice - 1].description);

        printf("entrer l annee d echeance modifiee : ");
        scanf("%d", &T[indice - 1].annee_d_echeance);

        printf("entrer la priorite apres modification : ");
        scanf("%d", &T[indice - 1].priorite);

        printf("tache modifiee avec succes.\n");                    
    } else {
        printf("erreur :vous avez donner un indice invalide.\n");
    }
}

/// TRI CROISSANT PAR ANNEE
void triCroissant() {
    tache temp;                            // dec de la variable temporaire de type tache
    for (i = 0; i < nbretaches - 1; i++) {        
        for (j = 0; j < nbretaches - i - 1; j++) {    
            if (T[j].annee_d_echeance > T[j + 1].annee_d_echeance){
                temp = T[j];         //la var temp stocke le contenu de T[j]
                T[j] = T[j + 1];     //contenu de T[j] est deplace a la position suiv
                T[j + 1] = temp;
            }
        }
    }
    printf("taches triees en ordre croissant  :\n");
}

/// TRI DECROISSANT PAR ANNEE

void triDecroissant(){
    tache temp;            
    for (i = 0; i < nbretaches - 1; i++) {
        for (j = 0; j < nbretaches - i - 1; j++) {
            if (T[j].annee_d_echeance < T[j + 1].annee_d_echeance){
                temp = T[j];    
                T[j] = T[j + 1];    
                T[j + 1] = temp;
            }
        }
    }
    printf("taches triees en ordre decroissant  :\n");
}
    /// FILTRAGE PAR PRIORITE
    void filtrerparPriorite() {
    int x;  //stockage de la priorite qu on veut filtrer
    printf("Entrer la priorite a filtrer : ");
    scanf("%d", &x);

    printf("Taches avec la priorite %d :\n", x);
    for (i = 0; i < nbretaches; i++) {
        if (T[i].priorite == x) {         //si la prio est meme que la prio a filter
            printf("%s %d %d %d\n", i + 1, T[i].description, T[i].annee_d_echeance, T[i].priorite);
     } else {
        printf("erreur :");
    }
    }
}

/// MAIN 

int main() {
    int choix;
    do {
        afficherMenu();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterTache();
                break;
            case 2:
                afficherTaches();
                break;
            case 3:
                supprimerTache();
                break;
            case 4:
                modifierTache();
                break;
            case 5:
                triCroissant();
                break;
            case 6:
                triDecroissant();
                break;
            case 7:
                filtrerparPriorite();
                break;
            default:
                printf("choix invalide .\n");
        }
    } while (choix != 0);

    return 0;
}
