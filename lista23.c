#include <stdio.h>

int main() 
{
    int mes;

    printf("Digite o número do mês: ");
    scanf("%d", &mes);

    int dias;
    switch (mes) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            dias = 28;
            break;
        default:
            dias = -1;
            break;
    }
    if (dias == -1) 
    {
        printf("Mês inválido.\n");
    } else 
    {
        printf("O mês possui %d dias.\n", dias);
    }

    return 0;
}