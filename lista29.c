#include <stdio.h>

int main() 
{
    float notas[5][4];
    float mediaAluno[5];
    float mediaTurma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite as notas do aluno %d:\n", i+1);

        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }

        mediaAluno[i] = (notas[i][0]*3 + notas[i][1]*2 + notas[i][2]*1 + notas[i][3]*1) / 7;

        mediaTurma += mediaAluno[i];
    }

    mediaTurma /= 5;

    printf("\nResultados:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d\n", i+1);
        printf("Média: %.2f\n", mediaAluno[i]);

        if (mediaAluno[i] >= 6) {
            printf("Situação: Aprovado\n");
        } else if (mediaAluno[i] >= 4) {
            printf("Situação: Recuperação (precisa de %.2f pontos para ser aprovado)\n", 6 - mediaAluno[i]);
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    printf("\nMédia da turma: %.2f\n", mediaTurma);

    return 0;
}