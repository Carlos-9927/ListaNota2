#include <stdio.h>

int main() {
    int num1, num2, operador, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);


    printf("Digite o operador (+ = 1. - = 2. * = 3. ÷ = 4): ");
    scanf(" %d", &operador);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (operador = 1)
    {
            resultado = num1 + num2;
            printf("O resultado da adição é: %d\n", resultado);
    }
    else if (operador = 2)
    {
            resultado = num1 - num2;
            printf("O resultado da subtração é: %d\n", resultado);
    }
    else if (operador = 3)
    {
            resultado = num1 * num2;
            printf("O resultado da multiplicação é: %d\n", resultado);
    }
    else if (operador = 4)
    {
            if (num2 != 0) 
            {
                resultado = num1 / num2;
                printf("O resultado da divisão é: %d\n", resultado);
            } 
            else 
            {
                printf("Erro: divisão por zero\n");
            }
    }
}