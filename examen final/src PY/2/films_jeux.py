from film_jeu import FilmJeu

class FilmsJeux:
    def __init__(self):
        self.films_jeux = []

    def ajouter_film_jeu(self):
        titre = input("Titre : ")
        description = input("Description : ")
        genre = input("Genre : ")
        plateforme = input("Plateforme : ")
        acteurs = input("Acteurs (séparés par des virgules) : ").split(",")
        realisateurs = input("Réalisateurs (séparés par des virgules) : ").split(",")

        film_jeu = FilmJeu(titre, description, genre, plateforme, acteurs, realisateurs)
        self.films_jeux.append(film_jeu)
        print("Le film ou jeu a été ajouté avec succès.")

    def modifier_film_jeu(self):
        titre = input("Titre du film ou jeu à modifier : ")
        for film_jeu in self.films_jeux:
            if film_jeu.titre == titre:
                # Demander les nouvelles informations
                nouveau_titre = input("Nouveau titre : ")
                nouvelle_description = input("Nouvelle description : ")
                nouveau_genre = input("Nouveau genre : ")
                nouvelle_plateforme = input("Nouvelle plateforme : ")
                nouveaux_acteurs = input("Nouveaux acteurs (séparés par des virgules) : ").split(",")
                nouveaux_realisateurs = input("Nouveaux réalisateurs (séparés par des virgules) : ").split(",")

                # Modifier les informations du film ou jeu
                film_jeu.titre = nouveau_titre
                film_jeu.description = nouvelle_description
                film_jeu.genre = nouveau_genre
                film_jeu.plateforme = nouvelle_plateforme
                film_jeu.acteurs = nouveaux_acteurs
                film_jeu.realisateurs = nouveaux_realisateurs

                print("Le film ou jeu a été modifié avec succès.")
                return

        print("Le film ou jeu n'a pas été trouvé.")

    def supprimer_film_jeu(self):
        titre = input("Titre du film ou jeu à supprimer : ")
        for film_jeu in self.films_jeux:
            if film_jeu.titre == titre:
                self.films_jeux.remove(film_jeu)
                print("Le film ou jeu a été supprimé avec succès.")
                return

        print("Le film ou jeu n'a pas été trouvé.")

    def afficher_tous_les_films_jeux(self):
        if len(self.films_jeux) == 0:
            print("Aucun film ou jeu disponible.")
        else:
            print("Liste des films et jeux :")
            for film_jeu in self.films_jeux:
                print(film_jeu)

    def rechercher_film_jeu(self):
        critere = input("Critère de recherche (titre/genre) : ")
        valeur = input("Valeur : ")
        resultat = []

        for film_jeu in self.films_jeux:
            if critere == "titre" and film_jeu.titre.lower() == valeur.lower():
                resultat.append(film_jeu)
            elif critere == "genre" and film_jeu.genre.lower() == valeur.lower():
                resultat.append(film_jeu)

        if len(resultat) > 0:
            print("Résultat de la recherche :")
            for film_jeu in resultat:
                print(film_jeu)
        else:
            print("Aucun résultat trouvé.")
