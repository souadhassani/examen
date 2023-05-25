#include <stdio.h>
#include <string.h>
#include "gestionnaire_films_jeux.h"

void initialiser_gestionnaire(GestionnaireFilmsJeux* gestionnaire) {
    gestionnaire->nombre_films_jeux = 0;
}

void ajouter_film_jeu(GestionnaireFilmsJeux* gestionnaire) {
    FilmJeu film_jeu;

    printf("===== Ajouter un nouveau film ou jeu =====\n");
    printf("Titre : ");
    scanf("%s", film_jeu.titre);
    printf("Description : ");
    scanf("%s", film_jeu.description);
    printf("Genre : ");
    scanf("%s", film_jeu.genre);
    printf("Plateforme : ");
    scanf("%s", film_jeu.plateforme);
    printf("Nombre d'acteurs : ");
    scanf("%d", &film_jeu.nombre_acteurs);
    printf("Acteurs : ");
    for (int i = 0; i < film_jeu.nombre_acteurs; i++) {
        scanf("%s", film_jeu.acteurs[i]);
    }
    printf("Nombre de réalisateurs : ");
    scanf("%d", &film_jeu.nombre_realisateurs);
    printf("Réalisateurs : ");
    for (int i = 0; i < film_jeu.nombre_realisateurs; i++) {
        scanf("%s", film_jeu.realisateurs[i]);
    }

    gestionnaire->films_jeux[gestionnaire->nombre_films_jeux++] = film_jeu;

    printf("Le film ou jeu a été ajouté avec succès.\n");
}

void modifier_film_jeu(GestionnaireFilmsJeux* gestionnaire) {
    char titre[100];
    int i;

    printf("===== Modifier les informations d'un film ou jeu =====\n");
    printf("Titre du film ou jeu à modifier : ");
    scanf("%s", titre);

    for (i = 0; i < gestionnaire->nombre_films_jeux; i++) {
        if (strcmp(gestionnaire->films_jeux[i].titre, titre) == 0) {
            FilmJeu film_jeu;

            printf("Nouveau titre : ");
            scanf("%s", film_jeu.titre);
            printf("Nouvelle description : ");
            scanf("%s", film_jeu.description);
            printf("Nouveau genre : ");
            scanf("%s", film_jeu.genre);
            printf("Nouvelle plateforme : ");
            scanf("%s", film_jeu.plateforme);
            printf("Nouveau nombre d'acteurs : ");
            scanf("%d", &film_jeu.nombre_acteurs);
            printf("Nouveaux acteurs : ");
            for (int j = 0; j < film_jeu.nombre_acteurs; j++) {
                scanf("%s", film_jeu.acteurs[j]);
            }
            printf("Nouveau nombre de réalisateurs : ");
            scanf("%d", &film_jeu.nombre_realisateurs);
            printf("Nouveaux réalisateurs : ");
            for (int j = 0; j < film_jeu.nombre_realisateurs; j++) {
                scanf("%s", film_jeu.realisateurs[j]);
            }

            gestionnaire->films_jeux[i] = film_jeu;

            printf("Le film ou jeu a été modifié avec succès.\n");
            return;
        }
    }

    printf("Le film ou jeu n'a pas été trouvé.\n");
}

void supprimer_film_jeu(GestionnaireFilmsJeux* gestionnaire) {
    char titre[100];
    int i, j;

    printf("===== Supprimer un film ou jeu =====\n");
    printf("Titre du film ou jeu à supprimer : ");
    scanf("%s", titre);

    for (i = 0; i < gestionnaire->nombre_films_jeux; i++) {
        if (strcmp(gestionnaire->films_jeux[i].titre, titre) == 0) {
            for (j = i; j < gestionnaire->nombre_films_jeux - 1; j++) {
                gestionnaire->films_jeux[j] = gestionnaire->films_jeux[j + 1];
            }
            gestionnaire->nombre_films_jeux--;

            printf("Le film ou jeu a été supprimé avec succès.\n");
            return;
        }
    }

    printf("Le film ou jeu n'a pas été trouvé.\n");
}

void afficher_tous_les_films_jeux(GestionnaireFilmsJeux* gestionnaire) {
    if (gestionnaire->nombre_films_jeux == 0) {
        printf("Aucun film ou jeu disponible.\n");
    } else {
        printf("Liste des films et jeux :\n");
        for (int i = 0; i < gestionnaire->nombre_films_jeux; i++) {
            FilmJeu film_jeu = gestionnaire->films_jeux[i];
            printf("Titre : %s\n", film_jeu.titre);
            printf("Description : %s\n", film_jeu.description);
            printf("Genre : %s\n", film_jeu.genre);
            printf("Plateforme : %s\n", film_jeu.plateforme);
            printf("Acteurs : ");
            for (int j = 0; j < film_jeu.nombre_acteurs; j++) {
                printf("%s ", film_jeu.acteurs[j]);
            }
            printf("\n");
            printf("Réalisateurs : ");
            for (int j = 0; j < film_jeu.nombre_realisateurs; j++) {
                printf("%s ", film_jeu.realisateurs[j]);
            }
            printf("\n");
        }
    }
}

void rechercher_film_jeu(GestionnaireFilmsJeux* gestionnaire) {
    char critere[50];
    char valeur[100];
    int i;

    printf("===== Rechercher un film ou jeu =====\n");
    printf("Critère de recherche (titre/genre) : ");
    scanf("%s", critere);
    printf("Valeur du critère : ");
    scanf("%s", valeur);

    FilmJeu resultat[100];
    int nombre_resultats = 0;

    for (i = 0; i < gestionnaire->nombre_films_jeux; i++) {
        FilmJeu film_jeu = gestionnaire->films_jeux[i];

        if (strcmp(critere, "titre") == 0 && strcmp(film_jeu.titre, valeur) == 0) {
            resultat[nombre_resultats++] = film_jeu;
        } else if (strcmp(critere, "genre") == 0 && strcmp(film_jeu.genre, valeur) == 0) {
            resultat[nombre_resultats++] = film_jeu;
        }
    }

    if (nombre_resultats > 0) {
        printf("Résultat de la recherche :\n");
        for (i = 0; i < nombre_resultats; i++) {
            FilmJeu film_jeu = resultat[i];
            printf("Titre : %s\n", film_jeu.titre);
            printf("Description : %s\n", film_jeu.description);
            printf("Genre : %s\n", film_jeu.genre);
            printf("Plateforme : %s\n", film_jeu.plateforme);
            printf("Acteurs : ");
            for (int j = 0; j < film_jeu.nombre_acteurs; j++) {
                printf("%s ", film_jeu.acteurs[j]);
            }
            printf("\n");
            printf("Réalisateurs : ");
            for (int j = 0; j < film_jeu.nombre_realisateurs; j++) {
                printf("%s ", film_jeu.realisateurs[j]);
            }
            printf("\n");
        }
    } else {
        printf("Aucun film ou jeu ne correspond à la recherche.\n");
    }
}
