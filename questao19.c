
#include <stdio.h>

int situacao_aluno(float media_final, int numero_faltas, int horas_aula) {
    // Calcula a frequência do aluno
    float frequencia = ((horas_aula - numero_faltas) / (float)horas_aula) * 100;
    

    if (media_final >= 70 && frequencia >= 75) {
        return 1; // Aprovado
    } else {
        return 0; // Reprovado
    }
}

int main() {
    float media_final;
    int numero_faltas, horas_aula;

    
    printf("Digite a média final do aluno: ");
    scanf("%f", &media_final);
    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &numero_faltas);
    printf("Digite a quantidade de horas-aula no semestre: ");
    scanf("%d", &horas_aula);

    
    if (situacao_aluno(media_final, numero_faltas, horas_aula)) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}