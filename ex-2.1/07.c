#include <string.h>
#include <stdio.h>

void exibir(maisP, menosP, tempMin, tempMax);

int main(void)
{
    char atual[30], maisP[30], menosP[30];
    int V, E, D, i, pontos, tempMin = 0, tempMax = 1000;
    for (i = 1; i <= 20; i++)
    {
        printf("Time numero %d: ", i);
        scanf("%s", atual);
        printf("Vitorias: ");
        scanf("%d", &V);
        printf("Empates: ");
        scanf("%d", &E);
        printf("Derrotas: ");
        scanf("%d", &D);
        pontos = E + (V*3);
        if (pontos > tempMin)
        {
            strcpy(maisP,atual);
            tempMin = pontos;
        }
        if (pontos < tempMax)
        {
            strcpy(menosP,atual);
            tempMax = pontos;
        }
    }
    exibir(maisP, menosP, tempMin, tempMax);
    return 0;
}

void exibir(maisP, menosP, tempMin, tempMax)
{
    printf("Time com a maior quantidade de pontos: %s\nPontuacao: %d\n", maisP, tempMin);
	  printf("Time com a menor quantidade de pontos: %s\nPontuacao: %d\n", menosP, tempMax);
}
