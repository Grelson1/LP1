  #include <stdio.h>
#include <string.h>
int main (void){
	char palavra[25];
	FILE* f = fopen("/temp/arq-02.txt", "r");
	int tam, i;
	tam = strlen(palavra);
	for (i = 0; i < tam; i++){
		palavra[i] = fgetc(f);
		printf("%c\n", palavra[i]);
	}
	fclose(f);
	return 0;
}
