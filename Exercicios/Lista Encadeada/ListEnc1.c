#include <stdio.h>
int main (void){
	int vet[5];
	int i, n;
	n = 0;
	for (i = 0; i < 5; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
		n++;
	}
	for (i = 0; i < n; i++){
		printf("%d\n", vet[i]);
	}
	int I;
	printf("Digite I: ");
	scanf("%d", &I);
	while (I > 5 || I < 0){
		 printf("Digite I: ");
		 scanf("%d", &I);
	}
	for (i = I; i < n-1; i++){
		vet[i] = vet[i+1];
	}
	n--;
	for (i = 0; i < n; i++){
		printf("%d\n", vet[i]);
	}
}
