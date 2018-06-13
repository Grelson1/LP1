#include <stdio.h>

void preenche (int* vec, int n){
    int a, i, j;
    for (i = 0; i < n; i++){
        printf ("Digite um valor: ");
        scanf ("%d", &a);
        vec[i] = a;
    }
}

int main (void){
    int vec[5];
    preenche (vec, 5);
    return 0;
}
