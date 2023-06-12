#include <stdio.h>

int main() 
{
    int num, i;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Tabuada do número %d:\n", num);
    for (i = 0; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}