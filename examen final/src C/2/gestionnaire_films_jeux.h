#ifndef GESTIONNAIRE_FILMS_JEUX_H
#define GESTIONNAIRE_FILMS_JEUX_H

typedef struct {
    char titre[100];
    char description[1000];
    char genre[50];
    char plateforme[50];
    char acteurs[10][100];
    int nombre_acteurs;
    char realisateurs[10][100];
    int nombre_realisateurs;
} FilmJeu;

typedef struct {
    FilmJeu films_jeux[100];
    int nombre_films_jeux;
} GestionnaireFilmsJeux;

void initialiser_gestionnaire(GestionnaireFilmsJeux* gestionnaire);
void ajouter_film_jeu(GestionnaireFilmsJeux* gestionnaire);
void modifier_film_jeu(GestionnaireFilmsJeux* gestionnaire);
void supprimer_film_jeu(GestionnaireFilmsJeux* gestionnaire);
void afficher_tous_les_films_jeux(GestionnaireFilmsJeux* gestionnaire);
void rechercher_film_jeu(GestionnaireFilmsJeux* gestionnaire);

#endif
