#include <stdio.h>
#include <string.h>
int len(char str[]) {
    int cont = 0;
    while(str[cont] != '\0') {
        cont++;
    }
    return cont;
}
void strjoin(char stringf[], char string1[], char string2[]) {
    int x = len(string1);
    int y = len(string2);
    int i, j;
    for (i = 0; i < x; i++) {
        stringf[i] = *(string1+i);
    }
    for (j = 0; j < y; j++) {
        stringf[x + j] = string2[j];
    }
    stringf[i+j] = '\0';
}
int main() {
    char str1[] = "Ren";
    char str2[] = "ato";
    char str3[100];
    strjoin(str3, str1, str2);
    printf("%s %d\n", str1, len(str1));
    printf("%s %d\n", str2, len(str2));
    printf("%s %d\n", str3, len(str3));
    return 0;
}
