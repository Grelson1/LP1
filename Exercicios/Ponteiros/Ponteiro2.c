#include <stdio.h>

void compra (int* conta, int valor){
    *conta = *conta - valor;
}
int main (void){
    int conta1;
    int conta2;
   
    printf ("Digite o saldo da conta 1: ");
    scanf ("%d\n", &conta1);
    printf ("Digite o saldo da conta 2: ");
    scanf ("%d\n", &conta2);
    if (conta1 > conta2){
       compra(&conta1, 500);
    }
    else{
        compra(&conta2, 500);
    }
    printf ("Saldo da conta 1: %d\n", conta1);
    printf ("Saldo da conta 2: %d\n", conta2);
    return 0;
}
