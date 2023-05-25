class Statistiques:
    def generer_statistiques(self, gestionnaire):
        print("Statistiques :")
        print("Nombre total de films et jeux :", len(gestionnaire.films_jeux))

        if len(gestionnaire.films_jeux) > 0:
            moyenne_notes = sum([film_jeu.note_utilisateur for film_jeu in gestionnaire.films_jeux]) / len(gestionnaire.films_jeux)
            print("Moyenne des notes des utilisateurs :", moyenne_notes)
        else:
            print("Aucun film ou jeu disponible pour calculer la moyenne des notes.")
