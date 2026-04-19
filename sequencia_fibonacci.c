/*
 * Projeto: Gerador de Sequencia de Fibonacci
 * Descrição: Algoritmo que calcula os 20 primeiros termos da sequencia.
 * Disciplina: Lógica de Programação - ADS
 */

#include <stdio.h>

int main() {
    int n = 20; 
    int t1 = 0, t2 = 1, proximoTermo;

    printf("--- Sequencia de Fibonacci (Top 20 termos) ---\n");

    for (int i = 1; i <= n; ++i) {
        printf("%d", t1);
        
        if (i < n) printf(", ");
        
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }

    printf("\n----------------------------------------------\n");

    return 0;
}
