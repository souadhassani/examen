#include "statistiques.h"

void generer_statistiques(Statistiques* statistiques, GestionnaireFilmsJeux* gestionnaire) {
    statistiques->nombre_films = 0;
    statistiques->nombre_jeux = 0;
    statistiques->total_acteurs = 0;
    statistiques->total_realisateurs = 0;

    for (int i = 0; i < gestionnaire->nombre_films_jeux; i++) {
        FilmJeu film_jeu = gestionnaire->films_jeux[i];

        if (strcmp(film_jeu.genre, "Film") == 0) {
            statistiques->nombre_films++;
        } else if (strcmp(film_jeu.genre, "Jeu") == 0) {
            statistiques->nombre_jeux++;
        }

        statistiques->total_acteurs += film_jeu.nombre_acteurs;
        statistiques->total_realisateurs += film_jeu.nombre_realisateurs;
    }

    printf("Statistiques :\n");
    printf("Nombre de films : %d\n", statistiques->nombre_films);
    printf("Nombre de jeux : %d\n", statistiques->nombre_jeux);
    printf("Total d'acteurs : %d\n", statistiques->total_acteurs);
    printf("Total de réalisateurs : %d\n", statistiques->total_realisateurs);
}

