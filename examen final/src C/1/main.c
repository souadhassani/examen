#include <stdio.h>
#include <string.h>

// Prototypes de fonctions
void fonction1();
void fonction2();
void fonction3();
void fonction4();
void fonction5();
void fonction6();
void fonction7();
void fonction8();
void fonction9();
void fonction10();

// Déclaration de variables
int main() {
    int variable1 = 10;
    int variable2 = 5;
    int variable3 = variable1 + variable2;

    float variable4 = 3.14;
    float variable5 = 2.5;
    float variable6 = variable4 * variable5;

    char variable7 = 'A';
    char variable8 = 'B';

    double variable9 = 10.5;
    double variable10 = 20.75;

    unsigned int variable11 = 100;
    unsigned int variable12 = 50;

    short variable13 = 1000;
    short variable14 = 500;

    long variable15 = 100000;
    long variable16 = 50000;

    unsigned short variable17 = 10000;
    unsigned short variable18 = 5000;

    unsigned long variable19 = 1000000;
    unsigned long variable20 = 500000;

    long long variable21 = 1000000000;
    long long variable22 = 500000000;

    unsigned long long variable23 = 10000000000;
    unsigned long long variable24 = 5000000000;

    long double variable25 = 3.14159265359;
    long double variable26 = 2.71828182846;

    int tableau[5] = {1, 2, 3, 4, 5};

    struct Personne {
        char nom[20];
        int age;
    };

    struct Personne personne1;
    personne1.age = 25;

    enum Mois {
        JANVIER,
        FEVRIER,
        MARS,
        AVRIL,
        MAI
    };

    enum Mois mois = AVRIL;

    union Nombre {
        int entier;
        float flottant;
    };

    union Nombre nombre;
    nombre.entier = 10;

    // Appel des fonctions
    fonction1();
    fonction2();
    fonction3();
    fonction4();
    fonction5();
    fonction6();
    fonction7();
    fonction8();
    fonction9();
    fonction10();

    // Affichage des résultats
    printf("Variable 3 : %d\n", variable3);
    printf("Variable 6 : %.2f\n", variable6);
    printf("Variable 9 : %.2lf\n", variable9);
    printf("Variable 10 : %.2lf\n", variable10);
    printf("Variable 11 : %u\n", variable11);
    printf("Variable 12 : %u\n", variable12);
    printf("Variable 13 : %hd\n", variable13);
    printf("Variable 14 : %hd\n", variable14);
    printf("Variable 15 : %ld\n", variable15);
    printf("Variable 16 : %ld\n", variable16);
    printf("Variable 17 : %hu\n", variable17);
    printf("Variable 18 : %hu\n", variable18);
    printf("Variable 19 : %lu\n", variable19);
    printf("Variable 20 : %lu\n", variable20);
    printf("Variable 21 : %lld\n", variable21);
    printf("Variable 22 : %lld\n", variable22);
    printf("Variable 23 : %llu\n", variable23);
    printf("Variable 24 : %llu\n", variable24);
    printf("Variable 25 : %.10Lf\n", variable25);
    printf("Variable 26 : %.10Lf\n", variable26);

    return 0;
}

// Déclaration de structures
struct Personne {
    char nom[20];
    int age;
};
typedef struct Personne Personne;

// Déclaration d'une énumération
enum Couleur {
    ROUGE,
    VERT,
    BLEU
};

// Définition des fonctions
void fonction1() {
    int nombre = 10;
    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else {
        printf("Le nombre est négatif.\n");
    }
}

void fonction2() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Iteration %d\n", i+1);
    }
}

void fonction3() {
    int x = 5;
    int y = 10;
    int resultat = x + y;
    printf("Le resultat de l'addition est : %d\n", resultat);
}

void fonction4() {
    int tableau[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

void fonction5() {
    struct Personne {
        char nom[20];
        int age;
    };
    struct Personne personne;
    strcpy(personne.nom, "Souad");
    personne.age = 28;
    printf("Nom : %s\n", personne.nom);
    printf("Age : %d\n", personne.age);
}

void fonction6() {
    int nombre = 15;
    if (nombre % 2 == 0) {
        printf("Le nombre est pair.\n");
    } else {
        printf("Le nombre est impair.\n");
    }
}

void fonction7() {
    int i = 0;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void fonction8() {
    int x = 10;
    int y = 3;
    int resultat = x / y;
    printf("Le resultat de la division est : %d\n", resultat);
}

void fonction9() {
    int tableau[5] = {10, 20, 30, 40, 50};
    int somme = 0;
    int i;
    for (i = 0; i < 5; i++) {
        somme += tableau[i];
    }
    printf("La somme des elements du tableau est : %d\n", somme);
}

void fonction10() {
    enum Couleur { ROUGE, VERT, BLEU };
    enum Couleur couleur = VERT;
    switch (couleur) {
        case ROUGE:
            printf("La couleur est rouge.\n");
            break;
        case VERT:
            printf("La couleur est verte.\n");
            break;
        case BLEU:
            printf("La couleur est bleue.\n");
            break;
        default:
            printf("Couleur inconnue.\n");
            break;
    }
}
