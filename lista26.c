#include <stdio.h>

int main() 
{
    int lado;


    printf("Digite o tamanho do lado do quadrado ");
    scanf("%d", &lado);

    if (lado < 1 || lado > 20) 
    {
        printf("Tamanho do lado inválido.\n");
        return 0;
    }

    for (int i = 0; i < lado; i++) 
    {
        for (int j = 0; j < lado; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

}