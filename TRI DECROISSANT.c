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
