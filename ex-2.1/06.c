#include <stdio.h>
#include <math.h>

//Calcular o somatório desejado

int main(void)
{
    int N, somatorio = 0, i;
    printf("Insira o limite do somatorio: ");
    scanf( "%d" , &N );
    for ( i = 1 ; i <= N ; i++ )
        {
            somatorio = somatorio + pow(i , 2);
        }
    printf("\nSomatorio realizado: %d\n", somatorio);
    return 0;
}
