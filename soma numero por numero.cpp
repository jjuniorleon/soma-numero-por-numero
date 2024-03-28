#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define n 100000

int main() {
    setlocale(LC_ALL, "");

    char s[n];
    int i, numero, soma = 1;

    printf("Digite os números: ");
    gets(s);
    i = strlen(s);
    printf("\n\n");

    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
        if (s[i] >= '0') {
            numero = s[i] - '0';
            soma += numero;
            if (i < strlen(s)-1) {
                printf("+");
            }
        }
    }

    printf("=%d\n", soma);

    return 0;
}
