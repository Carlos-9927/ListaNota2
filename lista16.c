#include <stdio.h>
#include <math.h>

int main() {
    float numero, raiz, quadrado;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero > 0) 
    {
        raiz = sqrt(numero);
        printf("a raiz quadrada é %.2f\n", raiz);
    } 
    else 
    {
        quadrado = numero * numero;
        printf("o quadrado é %.2f\n", quadrado);
    }
}