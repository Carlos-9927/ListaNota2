#include <stdio.h>

int main() 
{
    float hora, salario1, INSS, salario2;
    int aulas;

    printf("Digite o valor da hora-aula ");
    scanf("%f", &hora);

    printf("Digite o número de horas de aulas dadas ");
    scanf("%d", &aulas);

    printf("Digite a porcentagem de desconto do INSS ");
    scanf("%f", &INSS);

    salario1 = hora * aulas;
    INSS = salario1 * (INSS / 100.0);
    salario2 = salario1 - INSS;

    printf("O salário líquido do professor é: R$%.2f\n", salario2);
}