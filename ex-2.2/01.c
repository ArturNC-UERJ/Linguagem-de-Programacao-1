#include <stdio.h>

//ler n1 e n2, exibir todos os numeros entre eles

int main(void)
{
    int n1, n2, i;
    printf("Digite N1: ");
    scanf("%d", &n1);
    printf("Digite N2: ");
    scanf("%d", &n2);
    if ( n1 < n2 )
    {
        for ( i = n1+1 ; i < n2 ; i++ )
        {
            printf("%d\n", i);
        }
    }
    else
    {
        if ( n1 > n2 )
        {
            for ( i = n1-1 ; i > n2 ; i-- )
            {
                printf("%d\n", i);
            }
        }
        else
        {
            printf("\nNao ha numeros entre os valores inseridos\n");
        }
    }
    return 1;
}
