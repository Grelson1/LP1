//A ser consertado
#include <stdio.h>

void preenche (int* vec, int n){
    int a;
    int i;
    for (i = 0; i < n; i++){
        printf ("Digite um valor: ");
        scanf ("%d\n", &a);
        vec[i] = a;
    int j;
    for (j = 0; j < 5; j++){
        prinft("%p\n", vec[j]);
    }
}

int main (void){
    int vec[5];
    preenche ( vec, 5);
    }
    return 0;
}
