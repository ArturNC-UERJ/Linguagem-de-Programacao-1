#include <stdio.h>
int eh_primo(int n)
{
    int i , contador = 0;
    for ( i = 1 ; i <= n ; i++ )
    {
        if ( n % i == 0 )
        {
            contador += 1;
        }
    }
    if (contador == 2)
    {
        return 1;
    }
}

int main(void)
{
    int n;
    printf("Entre com um numero inteiro: ");
    scanf("%d" , &n);
    int resultado = eh_primo(n);
    if (resultado == 1)
    {
        printf("O numero eh primo!");
    }
    else
    {
        printf("O numero nao eh primo!");
    }
    return 0;
}
