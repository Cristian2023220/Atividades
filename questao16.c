
#include <stdio.h>

int main() {
    int apostado1, apostado2;
    int real1, real2;
    int pontos = 0;

   
    printf("Digite o placar apostado (formato: time1 time2): ");
    scanf("%d %d", &apostado1, &apostado2);

    
    printf("Digite o placar real (formato: time1 time2): ");
    scanf("%d %d", &real1, &real2);

    
    if ((apostado1 > apostado2 && real1 > real2) || 
        (apostado1 < apostado2 && real1 < real2) || 
        (apostado1 == apostado2 && real1 == real2)) {
        pontos += 10;
    }

    
    if (apostado1 == real1) {
        pontos += 5;
    }

    
    if (apostado2 == real2) {
        pontos += 5;
    }

  
    printf("Você fez %d pontos.\n", pontos);

    return 0;
}