void modifierTache() {
    int indice;                  // indice de la tache
    printf("Entrer l indice de la tache que vous voulez modifier : ");
    scanf("%d", &indice);

    if (indice >= 1 && indice <= nbretaches) {
        printf("entrer la modification de la description : ");           // modif des caracteristiques
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
