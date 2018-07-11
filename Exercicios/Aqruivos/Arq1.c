#include <stdio.h>
#include <string.h>
int main (void){
	char palavra[25];
	FILE* f = fopen("/temp/arq-02.txt", "w");
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	int tam, i;
	tam = strlen(palavra);
	for (i = 0; i < tam; i++){
		fputc(palavra[i], f);
	}
	fclose(f);
	return 0;
}
