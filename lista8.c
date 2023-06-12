#include <stdio.h>

int main() 
{
    float preco, desconto, preco2;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);
    desconto = preco * 0.09;
    preco2 = preco - desconto;

    printf("O novo preço com desconto de 9 porcento é %.2f reais", preco2);
}