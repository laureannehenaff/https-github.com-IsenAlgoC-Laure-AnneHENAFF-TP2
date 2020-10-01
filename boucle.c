#include <stdio.h>

int n = 0;
int somme1 = 0 ;
int a = 1 ;
int somme2 = 0 ;
int b = 1 ;
int somme3 = 0 ;

int main() {
    printf("la valeur de n est");
    scanf_s("%hu",&n);
    for ( int i=1 ; i<= n ; i++) { somme1 = somme1 + i; };
    printf("la somme des %d premiers entiers vaut %d",n,somme1);

    while (a<=100) {somme2 = somme2 + a; a = a+1 ; 
        if ((somme2-565535) >= a) {
            break; 
            printf("Dépassement de capacité");
        } 
    } ;
    printf("\nla somme des 100 premiers entiers vaut %d",somme2);


    do {somme3=somme3 + b; b=b+1; 
        if ((somme2-565535) >= a) {
            printf("\nIl y a dépassement de capacité, il faut changer n"); 
            scanf_s("%hu",&n);
        }
    } 
    while (b<=100 );
    printf("\nla somme des 100 premiers entiers vaut %d",somme3);
}


