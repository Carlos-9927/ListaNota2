#include <stdio.h>

int main() 
{
    int idade, i1_10 = 0, i11_20 = 0, i21_30 = 0, i31 = 0;
    float peso, p1_10 = 0, p11_20 = 0, p21_30 = 0, p31 = 0;

    for (int i = 1; i <= 15; i++) 
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) 
        {
            p1_10 += peso;
            i1_10++;
        } else if (idade >= 11 && idade <= 20) 
        {
            p11_20 += peso;
            i11_20++;
        } else if (idade >= 21 && idade <= 30) 
        {
            p21_30 += peso;
            i21_30++;
        } else if (idade > 30) {
            p31 += peso;
            i31++;
        }
    }

    float mp1_10 = p1_10 / i1_10;
    float mp11_20 = p11_20 / i11_20;
    float mp21_30 = p21_30 / i21_30;
    float mp31 = p31 / i31;

    printf("\n");
    printf("Média de peso das pessoas de 1 a 10 anos: %.2f\n", mp1_10);
    printf("Quantidade de pessoas de 1 a 10 anos: %d\n", i1_10);
    printf("\n");
    printf("Média de peso das pessoas de 11 a 20 anos: %.2f\n", mp11_20);
    printf("Quantidade de pessoas de 11 a 20 anos: %d\n", i11_20);
    printf("\n");
    printf("Média de peso das pessoas de 21 a 30 anos: %.2f\n", mp21_30);
    printf("Quantidade de pessoas de 21 a 30 anos: %.2f\n", mp21_30);
    printf("\n");
    printf("Média de peso das pessoas acima de 30 anos: %.2f\n", mp31);
    printf("Quantidade de pessoas acima de 30 anos: %d\n", i31);
}