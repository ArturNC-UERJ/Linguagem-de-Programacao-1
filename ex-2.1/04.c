#include <stdio.h>

/*Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora
(mph). Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente
1.6 quilômetros. Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.*/

int main(void)
{
    float quilometro, milha;
    printf("Insira a velocidade atual do carro em milhas por hora (mph): ");
    scanf("%f", &milha);
    quilometro = milha * 1.6;
    if (quilometro < 80)
    {
        printf("\nACELERE\n");
    }
    else
    {
        if (quilometro <= 100)
        {
            printf("\nMANTENHA\n");
        }
        else
        {
            printf("\nDESACELERE\n");
        }
    }
    return 0;
}
