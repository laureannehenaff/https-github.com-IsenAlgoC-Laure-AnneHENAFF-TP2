#include <stdio.h>
#include <stdlib.h>

int programme = 1;
float longueur;
float largeur;
float hauteur;
float valeur1;
float valeur2;
float tmp;

void permuter(valeur1,valeur2) {
    tmp = valeur1;
    valeur1 = valeur2;
    valeur2 = tmp;
}

int main() {
    while (programme=1)
    {
        //On demande les dimensions de la valise et on vérifie si elles sont comprises entre 1 et 150 cm
        printf("Quelle est la longueur de votre baggage ? \n");
        scanf("%f",&longueur);
        if (longueur<1 && longueur>150) {
            printf("\n Il faut changer la valeur de la longueur pour quelle soit comprise entre 1 et 150 cm \n");
            scanf("%f",&longueur);
        }

        printf("\n Quelle est la largeur de votre baggage ? \n");
        scanf("%f",&largeur);
        if (largeur<1 && largeur>150) {
            printf("\n Il faut changer la valeur de la largeur pour quelle soit comprise entre 1 et 150 cm \n");
            scanf("%f",&largeur);
        }

        printf("\n Quelle est la hauteur de votre baggage ? \n");
        scanf("%f",&hauteur);
        if (hauteur<1 && hauteur>150) {
            printf("\n Il faut changer la valeur de la hauteur pour quelle soit comprise entre 1 et 150 cm \n");
            scanf("%f",&hauteur);
        }

        //Les dimensions doivent vérifier cette inégalité : longueur>largeur>hauteur (sinon on permute)
        if (longueur<hauteur) {
            permuter(&longueur,&hauteur);
        }
        if (largeur<hauteur) {
            permuter(&largeur,&hauteur);
        }
        if (longueur<largeur) {
            permuter(&longueur,&largeur);
        }
        printf("\n On a donc comme dimmension pour notre baggage : %f*%f*%f ",&longueur,&largeur,&hauteur);

        //On finit par vérifier si les dimensions concordent avec les dimensions cabines
        if (longueur<=55 && largeur<=35 && hauteur<=25) {
            printf("\n VALIDE \n");
        }
        else {
            printf("\n NON VALIDE \n");
        }

        printf("\n Voulez-vous vérifier les dimensions d'un autre baggage ? Si oui tapez 1 si non tapez 0\n");
        scanf("%d",&programme);
    }
}