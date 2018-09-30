#include <stdio.h>

int eh_primo(n);
void todos_os_primos(max);
int main(void)
{
    int max;
    printf("Entre com o numero max: ");
    scanf("%d" , &max);
    todos_os_primos(max);
    return 0;
}
void todos_os_primos(max)
{
    int n;
    printf("Numeros primos entre 1 e %d\n", max);
    for (n = 2; n <= max; n++)
    {
        eh_primo(n);
        if (eh_primo(n) == 1)
        {
            printf("%d\n", n);
        }
    }
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
