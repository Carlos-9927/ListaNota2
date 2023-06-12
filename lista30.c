#include <stdio.h>

void listarCrescente(int lista[]) 
{
    int i, j, temp;
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }

    printf("\nLista em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarDecrescente(int lista[]) {
    int i, j, temp;

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (lista[j] < lista[j + 1]) {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }

    printf("\nLista em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

void listarOriginal(int lista[]) {
    int i;

    printf("\nLista na ordem original:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int lista[10];
    int i, opcao;

    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &lista[i]);
    }

    printf("\nEscolha uma opcão:\n");
    printf("1 - Listar em ordem crescente\n");
    printf("2 - Listar em ordem decrescente\n");
    printf("3 - Listar na ordem original\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            listarCrescente(lista);
            break;
        case 2:
            listarDecrescente(lista);
            break;
        case 3:
            listarOriginal(lista);
            break;
        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}