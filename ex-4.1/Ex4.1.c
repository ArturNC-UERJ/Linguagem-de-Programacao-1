#include <stdio.h>

int eh_primo(n);

int main(void)
{
    int n;
    printf("Entre com um numero inteiro: ");
    scanf("%d" , &n);
    int resultado = eh_primo(n);
    if (resultado == 1)
    {
        printf("NUMERO PRIMO!");
    }
    else
    {
        printf("NUMERO NAO PRIMO!");
    }
    return 0;
}

int eh_primo(n)
{
    int i , contador = 0;
    for ( i = 1 ; i <= n ; i++ )
    {
        if ( n % i == 0 )
        {
            contador += 1;
        }
    }
    if (contador <= 2)
    {
        return 1;
    }
}
