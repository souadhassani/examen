from films_jeux import FilmsJeux
from statistiques import Statistiques

def afficher_menu():
    print("===== Menu =====")
    print("1. Ajouter un film ou un jeu")
    print("2. Modifier les informations")
    print("3. Supprimer un film ou jeu")
    print("4. Afficher les informations sur tous les films et jeux")
    print("5. Générer des statistiques")
    print("6. Rechercher un film ou jeu")
    print("7. Quitter")

def main():
    gestionnaire = FilmsJeux()
    statistiques = Statistiques()

    while True:
        afficher_menu()
        choix = input("Entrez votre choix : ")

        if choix == "1":
            gestionnaire.ajouter_film_jeu()
        elif choix == "2":
            gestionnaire.modifier_film_jeu()
        elif choix == "3":
            gestionnaire.supprimer_film_jeu()
        elif choix == "4":
            gestionnaire.afficher_tous_les_films_jeux()
        elif choix == "5":
            statistiques.generer_statistiques(gestionnaire)
        elif choix == "6":
            gestionnaire.rechercher_film_jeu()
        elif choix == "7":
            print("Au revoir !")
            break
        else:
            print("Choix invalide. Veuillez réessayer.")

if __name__ == "__main__":
    main()
