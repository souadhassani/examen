#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gestionnaire_films_jeux.h"
#include "statistiques.h"

void afficher_menu() {
    printf("===== Menu =====\n");
    printf("1. Ajouter un nouveau film ou jeu\n");
    printf("2. Modifier les informations d'un film ou jeu\n");
    printf("3. Supprimer un film ou jeu\n");
    printf("4. Afficher les informations sur tous les films et jeux\n");
    printf("5. Générer des statistiques\n");
    printf("6. Rechercher un film ou jeu\n");
    printf("7. Quitter\n");
}

int main() {
    GestionnaireFilmsJeux gestionnaire;
    Statistiques statistiques;

    initialiser_gestionnaire(&gestionnaire);

    while (1) {
        afficher_menu();
        int choix;
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_film_jeu(&gestionnaire);
                break;
            case 2:
                modifier_film_jeu(&gestionnaire);
                break;
            case 3:
                supprimer_film_jeu(&gestionnaire);
                break;
            case 4:
                afficher_tous_les_films_jeux(&gestionnaire);
                break;
            case 5:
                generer_statistiques(&statistiques, &gestionnaire);
                break;
            case 6:
                rechercher_film_jeu(&gestionnaire);
                break;
            case 7:
                printf("Au revoir !\n");
                liberer_gestionnaire(&gestionnaire);
                exit(0);
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    }

    return 0;
}
