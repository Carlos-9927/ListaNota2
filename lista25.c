#include <stdio.h>

int main() 
{
    int alunos;
    int contador = 1;
    float nota, soma = 0, media;

    printf("Digite a quantidade de alunos na sala: ");
    scanf("%d", &alunos);

    while (contador <= alunos) 
    {
        printf("Digite a nota do aluno %d: ", contador);
        scanf("%f", &nota);

        soma += nota;
        contador++;
    }

    media = soma / alunos;

    printf("A média aritmética da turma é: %.2f\n", media);

}