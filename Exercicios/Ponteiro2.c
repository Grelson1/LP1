//A ser consertado
#include <stdio.h>

void compra (int* conta, int valor){
    *conta = *conta - valor;
}
int main (void){
    int conta1;
    int conta2;
    int* conta;
    int valor;
    printf ("Digite o saldo da conta 1: ");
    scanf ("%d\n", &conta1);
    printf ("Digite o saldo da conta 2: ");
    scanf ("%d\n", &conta2);
    if (conta1 > conta2){
        *conta = conta1;
    }
    else{
        *conta = conta2;
    }
    printf ("Digite o valor a ser debitado: ");
    scanf ("%d\n", &valor);
    compra (conta, valor);
    printf ("Saldo da conta 1: %d", conta1);
    printf ("Saldo da conta 2: %d", conta2);
    return 0;
}
