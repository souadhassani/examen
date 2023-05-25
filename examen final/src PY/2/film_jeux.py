class FilmJeux:
    def __init__(self, titre, description, genre, plateforme, acteurs, realisateurs):
        self.titre = titre
        self.description = description
        self.genre = genre
        self.plateforme = plateforme
        self.acteurs = acteurs
        self.realisateurs = realisateurs

    def __str__(self):
        return f"Titre : {self.titre}\nDescription : {self.description}\nGenre : {self.genre}\nPlateforme : {self.plateforme}\nActeurs : {', '.join(self.acteurs)}\nRéalisateurs : {', '.join(self.realisateurs)}"
