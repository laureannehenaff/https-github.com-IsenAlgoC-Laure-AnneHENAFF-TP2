#include <stdio.h>

int n = 0;
int somme1 = 0 ;
int a = 1 ;
int somme2 = 0 ;
int b = 1 ;
int somme3 = 0 ;

int main() {
    printf("la valeur de n est");
    scanf_s("%hu",&n);                                  //On demande a l'utilisateur de rentrer n
    for ( int i=1 ; i<= n ; i++) { somme1 = somme1 + i; };
    printf("la somme des %d premiers entiers vaut %d",n,somme1);

    while (a<=n) {somme2 = somme2 + a; a = a+1 ; 
        if ((somme2-565535) >= a) {
            break;                                  //On sort de la boucle while car il y a un dépassement de capacité.
            printf("Dépassement de capacité");
        } 
    } ;
    printf("\nla somme des %d premiers entiers vaut %d",n,somme2);


    do {somme3=somme3 + b; b=b+1; 
        if ((somme2-565535) >= a) {
            printf("\nIl y a dépassement de capacité, il faut changer n"); 
            printf("\nEntrez un nouveau n \n");     //on saisit une nouvelle valeur pour n tant qu'il n'y aura pas de n correct 
            scanf_s("%hu",&n);                      //permettant de réaliser la somme des npremiers entiers.
        }
    } 
    while (b<=n );
    printf("\nla somme des %d premiers entiers vaut %d",n,somme3);
}


