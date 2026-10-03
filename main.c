#include <stdio.h>

void main(){
    int lado;
    double raiz_de_tres;

    printf("quanto mede o lado do hexagono?\n");
    scanf("%d",&lado);
    printf("qual a sua aproximação da raiz de 3?\n");
    scanf("%lf",&raiz_de_tres);

    double area = 3 * lado * lado * raiz_de_tres / 2;

    printf("a area do seu hexagono é: %g\n", area);
}