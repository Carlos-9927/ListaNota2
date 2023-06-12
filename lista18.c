#include <stdio.h>

int main() 
{
    float compra, venda;

    printf("Digite o valor de compra do produto: ");
    scanf("%f", &compra);

    if (compra < 20.00) 
    {
        venda = compra + (compra * 0.45);
    } 
    else 
    {
        venda = compra + (compra * 0.30);
    }

    printf("O valor de venda do produto é: %.2f\n", valorVenda);

    return 0;
}