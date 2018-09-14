#include <stdio.h>

//Faça um programa que leia dois valores e exiba o maior valor lido.

int main(){
    int valor1, valor2;

    printf("Primeiro valor: ");
    scanf("%d", &valor1);
    printf("Segundo valor: ");
    scanf("%d", &valor2);

    if (valor1 > valor2)
    {
        printf("O valor %d eh maior", valor1);
    }
    else
    {
            printf("O valor %d eh maior", valor2);
    }
    return 0;
}
