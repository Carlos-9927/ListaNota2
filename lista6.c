#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, soma, produto, quadrado, raiz, diferenca, seno;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    produto = n1 * pow(n2, 2);
    quadrado = pow(n1, 2);
    raiz = sqrt(pow(n1, 2) + pow(n2, 2));
    diferenca = n1 - n2;
    seno = sin(diferenca);

 
    printf("A soma dos numeros: %.2f\n", soma);
    printf("O produto do primeiro numero pelo quadrado do segundo: %.2f\n", produto);
    printf("O quadrado do primeiro numero: %.2f\n", quadrado);
    printf("A raiz quadrada da soma dos quadrados: %.2f\n", raiz);
    printf("O seno da diferença do primeiro numero pelo segundo: %.2f\n", seno);

    return 0;
}