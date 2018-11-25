#include <stdio.h>

struct Jogador{
    char nome[10];
	int numero;
	char pos[15];
};

struct Time{
	char nome[20];
    struct Jogador jogadores[11];
    int pontos;
};

void preenche(struct Jogador* jogador){
	printf("Digite o nome do jogador: ");
	scanf("%s", (*jogador).nome);
	printf("Digite a posicao do jogador: ");
	scanf("%s", (*jogador).pos);
	printf("Digite o numero do jogador: ");
	scanf("%d", &(*jogador).numero);
}

void preenche2(struct Time* time){
	printf("Digite o nome do time: ");
	scanf("%s", (*time).nome);
	printf("Digite a pontuacao do time: ");
	scanf("%d", &(*time).pontos);
	printf("\n====== Membros do time ======\n\n");
	for (int i = 0; i < 11; i++){
        preenche(&(*time).jogadores[i]);
        printf("\n");
	}
}

int main(void){
    struct Time time;
    preenche2(&time);
    printf("\nO time %s possui %d pontos\n\n", time.nome, time.pontos);
    printf("Integrantes do time: \n");
    for (int i = 0; i < 11; i++){
        printf("Nome: %s --- Posicao: %s --- Numero: %d\n", time.jogadores[i].nome, time.jogadores[i].pos, time.jogadores[i].numero);
    }
	return 0;
}
