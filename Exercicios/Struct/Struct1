#include <stdio.h>
#include <string.h>
struct Equipe{
    char nome[10];
    int v;
    int e;
    int d;
};

void preenche (struct Equipe* p){
    printf ("Nome da equipe: ");
    scanf ("%s", (*p).nome);
    (*p).v = 0;
    (*p).e = 0;
    (*p).d = 0;
}

int main (void){
    struct Equipe equipe1;
    preenche(&equipe1);
    printf("Equipe: %s, Vitorias= %d, Empates= %d, Derrotas= %d \n", equipe1.nome, equipe1.v, equipe1.e, equipe1.d);
    return 0;
}
