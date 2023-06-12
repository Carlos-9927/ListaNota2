#include <stdio.h>

int main() 
{
    float soma, divisao, multiplicacao, subtracao;
    float num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    divisao = num1 / num2;
    multiplicacao = num1 * num2;
    subtracao = num1 - num2;

    printf("a soma dos dois números é %.2f", soma);
    printf("\na subtração dos dois números é %.2f", subtracao);
    printf("\na divisão dos dois números é %2f", divisao);
    printf("\na multiplicação dos dois números é %.2f", multiplicacao);
}





