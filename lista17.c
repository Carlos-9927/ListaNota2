#include <stdio.h>

int main() 
{
    int num;
    printf("Digite um número ");
    scanf("%d", &num);

    if (num % 10 == 0) 
    {
        printf("O número é divisível por 10\n");
    }
    else if (num % 5 == 0) 
    {
        printf("O número é divisível por 5\n");
    }
    else if 
    (num % 2 == 0) {
        printf("O número é divisível por 2\n");
    }
    else 
    {
        printf("O número não é divisível por 10, 5 ou 2\n");
    }
}


