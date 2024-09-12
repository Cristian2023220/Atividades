
#include <stdio.h>

int main() {
    int num, parte1, parte2, soma, quadrado;

    for (num = 1000; num <= 9999; num++) {
        parte1 = num / 100;  // Primeiros dois dígitos
        parte2 = num % 100;  // Últimos dois dígitos
        soma = parte1 + parte2;
        quadrado = soma * soma;

        if (quadrado == num) {
            printf("%d possui a característica: %d + %d = %d -> %d * %d = %d\n", num, parte1, parte2, soma, soma, soma, quadrado);
        }
    }

    return 0;
}