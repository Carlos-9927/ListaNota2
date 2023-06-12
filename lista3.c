#include <stdio.h>

int main()
{
    int metros;
    int decimetros;
    int centimetros;
    int milimetros;
    
    printf("Digite o número :");
    scanf("%d", &metros);
    
    decimetros = metros * 10;
    centimetros = metros * 100;
    milimetros = metros * 1000;
    
    printf("%d metros em decímetros é %d", metros, decimetros);
    printf("\n%d metros em centímetros é %d", metros, centimetros);
    printf("\n%d metros em milímetros é %d", metros, milimetros);
    return 0;
}
