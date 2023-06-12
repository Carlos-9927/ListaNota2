#include <stdio.h>

int main() 
{
    int num;

    printf("Digite um número decimal ");
    scanf("%d", &num);

    printf("O número em hexadecimal é 0x%X\n", num);

    printf("O número em octal é 0%o\n", num);

}