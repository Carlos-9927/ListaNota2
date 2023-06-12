#include <stdio.h>

int main()
{
    float raio;
    float dia;
    float comp;
    float area;
    
    printf("Indique o raio em metros : ");
    scanf("%f",&raio);
    
    dia = (raio * 2);
    comp = (2 * 3.14 * raio);
    area = (3.14 * raio * raio);
    
    printf("O diâmetro é %.2f metros", dia);
    printf("\nO comprimento é %.2f metros", comp);
    printf("\nA área é %.2f metros", area);

    return 0;
}
