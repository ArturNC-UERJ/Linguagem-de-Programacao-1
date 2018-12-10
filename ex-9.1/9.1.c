#include <stdio.h>

int main(void){
	int i, vet[5], I;
	for (i = 0; i < 5; i++){
		scanf("%d", &vet[i]);
	}
	printf("\nVETOR:\n");
	for (i = 0; i < 5; i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	printf("\nDigite a posicao a ser removida: ");
	scanf("%d", &I);
	for (I; I < 4; I++){
		vet[I] = vet[I+1];
	}
	printf("\nNOVO VETOR:\n");
	for (i = 0; i < 4; i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	return 0;
}
