#include <stdio.h>

int main() {
    int dia, mes, ano;
    int valida = 1;

    printf("Digite o dia do aniversário: ");
    scanf("%d", &dia);
    printf("Digite o mês do aniversário: ");
    scanf("%d", &mes);
    printf("Digite o ano do aniversário: ");
    scanf("%d", &ano);

    if (ano != 2023) 
    {
        valida = 0;
        printf("Data inválida, não está em 2023\n");
    } 
    else if (mes < 1 || mes > 12) 
    {
        valida = 0;
        printf("Data inválida, não temos mais que 12 meses\n");
    } 
    else if (dia < 1 || dia > 31) 
    {
        valida = 0;
        printf("Data inválida, existem apenas 31 dias no mês\n");
    }

    if (valida) 
    {
        printf("Data válida.\n");
    }

    return 0;
}