#include <stdio.h>

int main() 
{
    int idade;

    printf("Digite a sua idade ");
    scanf("%d", &idade);

    if (idade < 16) 
    {
        printf("sua classe eleitoral é Não-eleitor\n");
    } 
    else if (idade >= 18 && idade <= 65) 
    {
        printf("sua classe eleitoral é Eleitor obrigatório\n");
    } 
    else if (idade >= 16 && idade < 18) 
    {
        printf("sua classe eleitoral é Eleitor facultativo\n");
    }
    else if (idade > 65) 
    {
        printf("sua classe eleitoral é Eleitor facultativo\n");
    }
}