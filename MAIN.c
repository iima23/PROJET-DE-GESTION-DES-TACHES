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
                printf("fin .\n");
                break;
            default:
                printf("Choix invalide .\n");
        }
    } while (choix != 0);

    return 0;
}
