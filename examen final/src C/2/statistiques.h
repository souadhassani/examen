#ifndef STATISTIQUES_H
#define STATISTIQUES_H

#include "gestionnaire_films_jeux.h"

typedef struct {
    int nombre_films;
    int nombre_jeux;
    int total_acteurs;
    int total_realisateurs;
} Statistiques;

void generer_statistiques(Statistiques* statistiques, GestionnaireFilmsJeux* gestionnaire);

#endif
