#include <stdio.h>

short a = 0;
short b =0;
short c = 0;

int main() {
    do {printf("Quels sont les dimensions du bagage en cm ?");
        scanf_s("%d",&a);
        scanf_s("%d",&b);
        scanf_s("%d",&c);
    }
    while (1>a && 1>b && 1>c);
    while (150<a && 150<b && 150<c)

    if (a<b) { short t1=a; a=b; b=t1 ; }
        if (a<c) { short t3=a; a=c; c=t3 ; }
        else {
            if (a<55 && b<35 && c<25) {
            printf("VALIDE");
            }
            else { print("NON VALIDE");}
        }
    else {
        if (b<c) { short t2=b; b=c; c=t2 ; }
        else {
            if (a<55 && b<35 && c<25) {
            printf("VALIDE");
            }
            else { print("NON VALIDE");}
        }
    }

