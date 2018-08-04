#include <stdio.h>
#include <string.h>

struct Equipe{
	char nome[25];
	int v;
	int e;
	int d;
};
struct Jogo{
	struct Equipe time1;
	struct Equipe time2;
};
//Inicio do programa
void preenche (struct Equipe* p){
	printf ("Nome da equipe: ");
	scanf ("%s", (*p).nome);
	(*p).v = 0;
	(*p).e = 0;
	(*p).d = 0;
}
//criar função para ordenar a tabela a cada rodada
int main (void){
	int n, i, k;
	struct Equipe tabela[20];
	struct Jogo partidas[380];//380
	int resultados [380];
	printf ("Quantos participarao do torneio(Minimo de 2 e maximo de 20 participantes)?");
	scanf ("%d", &n);
	while (n < 2 || n > 20){
		printf ("Quantos participarao do torneio(Minimo de 2 e maximo de 20 participantes)?");
		scanf ("%d", &n);
	}
	struct Equipe p;
	for (i = 0; i < n; i++){
		preenche(&tabela[i]);

	}
    k = ((2*n)-2)*(n/2);
    printf("%d\n", k);
	for (i = 0; i < n; i++){
		printf ("%s %d %d %d\n", tabela[i].nome, tabela[i].v, tabela[i].e, tabela[i].d);
	}
//Cria os conforntos
    i = 0;
    int j = 1;
    int w = 0;
    while (i < n){
        while (j < n){
				partidas[w].time1 = tabela[i];
				partidas[w].time2 = tabela[j];
	        	j = j + 1;
    	    	w = w + 1;
        }
        j = 1;
        i = i + 1;
    }
	for (i = 0; i < k; i++){
        printf("%s x %s\n", partidas[i].time1.nome, partidas[i].time2.nome);
	}
//Cria os resultados
	i = 0;
	printf ("1 = Vitoria para o time da casa\n2 = empate\n3 = Vitoria para o visitante\n");
	while (i < k){
		printf("Resultados de %s X %s: ", partidas[i].time1.nome, partidas[i].time2.nome);
		scanf("%d", &resultados[i]);
		if (resultados[i] > 3 || resultados[i] < 0){
			printf("Resultados de %s X %s: ", partidas[i].time1.nome, partidas[i].time2.nome);
			scanf("%d", &resultados[i]);
		}
		else{
			i = i + 1;
		}
	}
/* Atribui resultados
	for (i = 0; i < k; i++){
		if (resultados[i] == 1){
			tabela[i].v = tabela[i].v + 1;
		}
		else if (resultado[i] == 2){
			tabela[i].e = tabela[i].e + 1;
		}
*/
}
