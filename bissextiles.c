#include <stdio.h>
#include <stdlib.h>

int annee;

int main() {
    printf("Quelle année ?");
    scanf_s("%d",&annee);

    if (annee%4==0) {
        if (annee%400==0 && annee%100==0) { printf("L'année est bissextile"); }
    }
    else { printf("l'année n'est pas bissextile");}
}
