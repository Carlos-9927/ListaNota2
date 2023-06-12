#include <stdio.h>

int main() 
{
    char carro;
    float distancia, consumo;

    printf("Digite o tipo de carro entre A, B e C. OBS: em maiusculo: ");
    scanf(" %c", &carro);

    printf("Digite a distância rodada em km: ");
    scanf("%f", &distancia);

    switch (carro) 
    {
        case 'A':
            consumo = distancia / 8;
            break;
        case 'B':
            consumo = distancia / 9;
            break;
        case 'C':
            consumo = distancia / 12;
            break;
        default:
            printf("Tipo de carro inválido.\n");
            return 0;
    }

    printf("O consumo estimado é de %.2f litros.\n", consumo);

}