#include <stdio.h>

struct Pais {
	char nome[30];
	int populacao;
	float PIB;
};

struct Continente {
	char nome[10];
	float area;
	int populacao_total;
	struct Pais pais;
};

void preenche(struct Pais* pais){
	printf("Digite o nome do pais: ");
	scanf("%s", (*pais).nome);
	printf("Digite a populacao do pais: ");
	scanf("%d", &(*pais).populacao);
	printf("Digite o PIB do pais: ");
	scanf("%f", &(*pais).PIB);
}

void preenche2(struct Continente* c1){
	printf("Digite o nome do continente: ");
	scanf("%s", (*c1).nome);
	printf("Digite a populacao total do continente: ");
	scanf("%d", &(*c1).populacao_total);
	printf("Digite a area do continente: ");
	scanf("%f", &(*c1).area);
	preenche(&(*c1).pais);
}

int main(void){
	struct Continente c1;
	preenche2(&c1);
	printf("Continente: %s\nArea: %.1f Km2\nPopulacao Absoluta: %d habitantes\nPais: %s\nPopulacao: %d habitantes\nPIB: $%.2f\n", c1.nome, c1.area, c1.populacao_total, c1.pais.nome, c1.pais.populacao, c1.pais.PIB);
	return 0;
}
