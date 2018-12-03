#include <stdio.h>

struct Posicao{
    int x;
    int y;
};

struct Personagem {
	int id;
	struct Posicao pos;
	int pts;
};

struct Posicao le_posicao(){
	struct Posicao pos;
	printf("Insira o ponto X do personagem: ");
	scanf("%d", &pos.x);
	printf("Insira o ponto Y do personagem: ");
	scanf("%d", &pos.y);
	return pos;
}

void le_personagem(struct Personagem* px){
    printf("Identidade do personagem: ");
    scanf("%d", &px->id);
    printf("Pontuacao do personagem: ");
    scanf("%d", &px->pts);
    px->pos = le_posicao();
}

void mapa(struct Personagem* personagem){
    printf("    0 1 2 3 4 5 6 7 8 9\n\n");
    for (int y = 0; y < 10; y++){
        printf("%d", y);
        int anterior = 0;
        for (int x = 0; x < 10; x++){
            for (int p = 0; p < 10; p++){
                if (personagem[p].pos.x == x && personagem[p].pos.y == y){
                        printf("%*d", (x*2)+4 - anterior, personagem[p].id);
                        anterior = (x*2)+4;
                    }
                }
            }
        printf("\n");
        }
}

int main(void){
	struct Personagem personagem[10];
    for (int i = 0; i < 10; i++){
        le_personagem(&personagem[i]);
        printf("\n");
    }
    mapa(&personagem);
	return 0;
}
