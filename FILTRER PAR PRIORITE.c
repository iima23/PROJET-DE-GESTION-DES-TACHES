void filtrerparPriorite() {
    int x;                       //  stockage de la priorite qu on veut filtrer
    printf("Entrer la priorite a filtrer : ");
    scanf("%d", &x);

    printf("Taches avec la priorite %d :\n", x);
    for (i = 0; i < nbretaches; i++) {
        if (x ==T [i].priorite  ) {            //si la prio est meme que la prio a filter
            printf("%d" , T[i].priorite);
        } else {
        printf("erreur :");
    }
    }
}
