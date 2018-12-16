#include <stdio.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};

void exibe(struct Caixa* caixa){
    while(1){
        printf("%d", caixa->valor);
        if (caixa->prox == NULL){
            break;
        }
        printf(" -> ");
        caixa = caixa->prox;
    }
}

int main(void){
	struct Caixa c0, c1, c2, c3, c4;
	c0.valor = 1;
	c1.valor = 3;
	c2.valor = 9;
	c3.valor = 7;
	c4.valor = 5;
	c0.prox = &c1;
	c1.prox = &c2;
	c2.prox = &c3;
	c3.prox = &c4;
    c4.prox = NULL;
    exibe(&c0);
	return 0;
}
