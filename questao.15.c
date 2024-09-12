
#include <stdio.h>

double calcular_salario(double horas_trabalhadas, double valor_hora) {
    double salario;
    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        salario = (40 * valor_hora) + ((horas_trabalhadas - 40) * valor_hora * 1.5);
    } else {
        salario = (40 * valor_hora) + (20 * valor_hora * 1.5) + ((horas_trabalhadas - 60) * valor_hora * 2);
    }
    return salario;
}

int main() {
    double horas_trabalhadas, valor_hora, salario_semanal;

    printf("Digite o número de horas trabalhadas na semana: ");
    scanf("%lf", &horas_trabalhadas);

    printf("Digite o valor da hora trabalhada: ");
    scanf("%lf", &valor_hora);

    salario_semanal = calcular_salario(horas_trabalhadas, valor_hora);

    printf("O salário semanal é: %.2lf\n", salario_semanal);

    return 0;
}