#include <stdio.h>

/*Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir
a soma de todos os números lidos.
Dicas:
while */

int main(void)
{
    int numero, somatorio = 0;
    while(1)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero == 0)
        {
            break;
        }
        else
        {
            somatorio = somatorio + numero;
        }
    }
    printf("O somatorio foi %d", somatorio);
    return 0;
}
