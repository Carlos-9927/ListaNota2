#include <stdio.h>

int main() 
{
    int idade;

    printf("Digite a sua idade ");
    scanf("%d", &idade);

    if (idade >= 10 && idade <= 14) 
    {
        printf("você se encaixa na categoria de : infantil\n");
    } 
    else if (idade >= 15 && idade <= 17) 
    {
        printf("você se encaixa na categoria de : juvenil\n");
    } 
    else if (idade >= 18 && idade <= 25) 
    {
        printf("você se encaixa na categoria de : adulto\n");
    } 
}