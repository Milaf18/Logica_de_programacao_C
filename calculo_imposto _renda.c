/*
 * Projeto: Calculadora de Imposto de Renda (IR)
 * Descrição: Algoritmo para cálculo de alíquota baseado em faixas salariais.
 * Disciplina: Lógica de Programação - ADS
 */

#include <stdio.h>

int main() {
    float salario, imposto;

    printf("--- Simulador de Aliquota IR ---\n");
    printf("Digite o salario bruto: R$ ");
    scanf("%f", &salario);

    // Lógica das faixas salariais
    if (salario <= 1903.98) {
        imposto = 0;
        printf("Resultado: Isento de IR\n");
    } else if (salario <= 2826.65) {
        imposto = salario * 0.075;
        printf("Aliquota 7,5%%: R$ %.2f\n", imposto);
    } else if (salario <= 3751.05) {
        imposto = salario * 0.15;
        printf("Aliquota 15%%: R$ %.2f\n", imposto);
    } else if (salario <= 4664.68) {
        imposto = salario * 0.225;
        printf("Aliquota 22,5%%: R$ %.2f\n", imposto);
    } else {
        imposto = salario * 0.275;
        printf("Aliquota 27,5%%: R$ %.2f\n", imposto);
    }

    printf("Salario Liquido (estimado): R$ %.2f\n", salario - imposto);
    printf("--------------------------------\n");

    return 0;
}
