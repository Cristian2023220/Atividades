
#include <stdio.h>

unsigned int inverte(unsigned int num) {
    unsigned int invertido = 0;

    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }

    return invertido;
}

int main() {
    unsigned int numero = 431;
    printf("Número invertido: %u\n", inverte(numero));
    return 0;
}