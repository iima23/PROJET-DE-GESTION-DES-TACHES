void afficherTaches() {
    if (nbretaches == 0) {
        printf("la liste des taches est vide.\n");
    } else {
        printf("liste des taches :\n");
        for (i = 0; i < nbretaches; i++) {
            printf("%s %d %d\n", i + 1, T[i].description, T[i].annee_d_echeance ,T[i].priorite);
        }
    }
}

void supprimerTache() {
    if (nbretaches == 0) {
        printf("la liste des taches est vide.\n");
        return;
    }

    printf("entrer la position de la tache a supprimer : ");
    scanf("%d", &pos);

    if (pos >= 1 && pos <= nbretaches) {
        for (i = pos - 1; i < nbretaches - 1; i++) {
            T[i] = T[i + 1];     //remplacer la tache par la suivante
        }
        nbretaches--;   //decrem du nbretaches apres supression
        printf("tache supprimee de la liste.\n");
    } else {
        printf("position invalide.\n");
    }
}
