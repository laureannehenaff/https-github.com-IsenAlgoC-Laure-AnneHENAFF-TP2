#include <stdlib.h>
#include <stdio.h>

int essai;
int compteur = 1;

int main() {
    int devinette = rand()%100;
    printf("A toi de jouer !");
    scanf("%d",&essai);

    while (essai != devinette) {

        if (essai<devinette) {
            printf("\n TROP PETIT \n");
            printf("Réessayez ! \n");
            scanf("%d",&essai);
            compteur=compteur+1;
        }

        if (essai>devinette) {
            printf("\n TROP GRAND \n");
            printf("Réessayez ! \n");
            scanf("%d",&essai);
            compteur=compteur+1;
        }

    }
    printf("Félicitations vous avez gagné en %d essais",compteur);
}