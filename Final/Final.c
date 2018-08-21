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
void preenche (struct Equipe* p){
	printf ("Nome da equipe: ");
	scanf ("%s", (*p).nome);
	(*p).v = 0;
	(*p).e = 0;
	(*p).d = 0;
}
void novocamp(){
    int n, i, k;
	struct Equipe tabela[22];
	int tam[20];
	struct Jogo partidas[190];
	int resultados [190];
	FILE* f = fopen("final.txt", "wb");
	printf ("Quantos participarao do torneio(Minimo de 2 e maximo de 20 participantes)?");
	scanf ("%d", &n);
	while (n < 2 || n > 20){
		printf ("Quantos participarao do torneio(Minimo de 2 e maximo de 20 participantes)?");
		scanf ("%d", &n);
	}
	for (i = 0; i < n; i++){
		preenche(&tabela[i]);
	}
	k = (n*(n-1)/2);
    printf("%d\n", k);
    printf("Equipes Vitorias Empates Derrotas\n");
	for (i = 0; i < n; i++){
		printf ("%s        %d        %d        %d\n", tabela[i].nome, tabela[i].v, tabela[i].e, tabela[i].d);
	}
//Cria os conforntos
    i = 0;
    int j = 0;
    int w = 0;
    while (i < n){
        while (j < n){
            if (i == j){
                j++;
            }
			partidas[w].time1 = tabela[i];
			partidas[w].time2 = tabela[j];
			j++;
			w++;
        }
        i++;
        j = i;
    }
    printf("Partidas:\n");
	for (i = 0; i < k; i++){
        printf("%s x %s\n", partidas[i].time1.nome, partidas[i].time2.nome);
	}
//Cria os resultados
	i = 0;
	printf ("1 = Vitoria para o time da casa\n2 = Empate\n3 = Vitoria para o visitante\n");
	while (i < k){
		printf("Resultado de %s X %s: ", partidas[i].time1.nome, partidas[i].time2.nome);
		scanf("%d", &resultados[i]);
		if (resultados[i] > 3 || resultados[i] < 0){
			printf("Resultado de %s X %s: ", partidas[i].time1.nome, partidas[i].time2.nome);
			scanf("%d", &resultados[i]);
		}
		else{
			i++;
		}
	}
// Atribui resultados
	for (i = 0; i < k; i++){
		if (resultados[i] == 1){
			partidas[i].time1.v = partidas[i].time1.v + 1;
			partidas[i].time2.d = partidas[i].time2.d + 1;
		}
		else if (resultados[i] == 2){
			partidas[i].time1.e = partidas[i].time1.e + 1;
			partidas[i].time2.e = partidas[i].time2.e + 1;
		}
		else if (resultados[i] == 3){
            partidas[i].time1.d = partidas[i].time1.d + 1;
            partidas[i].time2.v = partidas[i].time2.v + 1;
		}
	}
//Devolve resultados a tabela
	i = 0;
	j = 0;
	while(i < n){
	    while(j < k){
                if (strcmp(tabela[i].nome, partidas[j].time1.nome)== 0){
                    tabela[i].v = tabela[i].v + partidas[j].time1.v;
                    tabela[i].e = tabela[i].e + partidas[j].time1.e;
                    tabela[i].d = tabela[i].d + partidas[j].time1.d;
                }
                else if (strcmp(tabela[i].nome, partidas[j].time2.nome)== 0){
                    tabela[i].v = tabela[i].v + partidas[j].time2.v;
                    tabela[i].e = tabela[i].e + partidas[j].time2.e;
                    tabela[i].d = tabela[i].d + partidas[j].time2.d;
                }
                j++;
        }
        i++;
        j = 0;
	}
    printf("Equipes Vitorias Empates Derrotas\n");
	for (i = 0; i < n; i++){
		printf ("%s        %d        %d        %d\n", tabela[i].nome, tabela[i].v, tabela[i].e, tabela[i].d);
	}
	printf("########################\n");
//Ordena por selecao
	for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if (tabela[i].v > tabela[j].v){
                tabela[21] = tabela[i];
                tabela[i] = tabela[j];
                tabela[j] = tabela[21];
            }
            else if(tabela[i].v == tabela[j].v){
                if(tabela[i].e > tabela[j].e){
                        tabela[21] = tabela[i];
                        tabela[i] = tabela[j];
                        tabela[j] = tabela[21];
                }
            }
        }
	}
    printf("Equipes Vitorias Empates Derrotas\n");
	for (i = 0; i < n; i++){
		printf ("%s        %d        %d        %d\n", tabela[i].nome, tabela[i].v, tabela[i].e, tabela[i].d);
	}
	fwrite(&n, sizeof(int), 1, f);
	for (i = 0; i < n; i++){
	    tam[i] = strlen(tabela[i].nome);
	    fwrite(&tam[i], sizeof(int), 1, f);
	    fwrite(&tabela[i].nome, sizeof(char), tam[i], f);
	    fwrite(&tabela[i].v, sizeof(int), 1, f);
	    fwrite(&tabela[i].e, sizeof(int), 1, f);
	    fwrite(&tabela[i].d, sizeof(int), 1, f);
	}
	fclose(f);
}
void carregacamp(){
    int qtd, i, j;
    int k = 0;
    struct Equipe p[22];
    int tam[22];
    FILE* f = fopen("final.txt", "rb");
    fread(&qtd, sizeof(int), 1, f);
    for(i = 0; i < qtd; i++){
        fread(&tam[i], sizeof(int), 1, f);
	    fread(&p[i].nome, sizeof(char), tam[i], f);
	    p[i].nome[tam[i]] = '\0';
	    fread(&p[i].v, sizeof(int), 1, f);
	    fread(&p[i].e, sizeof(int), 1, f);
	    fread(&p[i].d, sizeof(int), 1, f);
    }
    printf("%d\n", qtd);
    for(i = 0; i < qtd; i++){
        printf("%s %d %d %d\n", p[i].nome, p[i].v, p[i].e, p[i].d);
    }
}
int main(void){
    char resposta[3];
    printf("Deseja criar um novo campeonato?");
    scanf("%s", &resposta);
    while(1){
        if (strcmp(resposta, "sim") == 0){
            novocamp();
            break;
        }
        else if(strcmp(resposta, "nao") == 0){
            carregacamp();
            break;
        }
        else{
            printf("Deseja criar um novo campeonato?");
            scanf("%s", &resposta);
        }
    }
}
