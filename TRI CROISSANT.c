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
