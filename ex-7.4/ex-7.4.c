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

int main(void){
	struct Personagem personagem[10];
    for (int i = 0; i < 10; i++){
        personagem[i].pts = 0;
    }
	return 0;
}
