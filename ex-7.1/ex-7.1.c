#include <stdio.h>

struct Pais {
	char nome[20];
	int populacao;
	float PIB;
};

void preenche(struct Pais* pais){
	printf("Digite o nome do pais: ");
	scanf("%s", (*pais).nome);
	printf("Digite a populacao do pais: ");
	scanf("%d", &(*pais).populacao);
	printf("Digite o PIB do pais: ");
	scanf("%f", &(*pais).PIB);
}

int main(void){
	struct Pais pais1;
	preenche(&pais1);
	printf("\nNOME: %s\nPOPULACAO: %d habitantes\nPIB(dolares): $%.2f\n", pais1.nome, pais1.populacao, pais1.PIB);
	return 0;
}
