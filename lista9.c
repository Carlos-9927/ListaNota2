#include <stdio.h>

int main() 
{
    int distancia, tempo, velocidade;

    printf("Digite o tempo da viagem em horas ");
    scanf("%i", &tempo);

    printf("Digite a velocidade ");
    scanf("%i", &velocidade);

    distancia = tempo * velocidade;

    printf("A distância percorrida é de %i km\n", distancia);

    return 0;
}