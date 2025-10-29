#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void torre(int casas) {
    if (casas > 0) {
        printf("Direta \n ");  // Imprime direção da peça

        torre(casas - 1);  // Chama a si mesma com torre - 1
    }
}

void moverBispo(int casas, int vertical, int horizontal) {
    if (vertical > casas || horizontal > casas) return; // Caso base

    printf("Cima-Direita \n", vertical, horizontal);

    // Loops aninhados: externo (vertical), interno (horizontal)
    for (int v = 0; v < 1; v++) { // Externo (vertical)
        for (int h = 0; h < 1; h++) { // Interno (horizontal)
            moverBispo(casas, vertical + 1, horizontal + 1); // Avança nas diagonais
        }
    }
}

void rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda \n ");  // Imprime direção da peça

        rainha(casas - 1);  // Chama a si mesma com rainha - 1
    }
}

void moverCavalo(int movimentos) {
    int casasVerticais = 2; // Duas casas para cima
    int casasHorizontais = 1; // Uma casa para direita

    for (int i = 1; i <= movimentos; i++) {
        for (int v = 1, h = 1; v <= casasVerticais && h <= casasHorizontais; v++, h++) {
            if (v == 2 && h == 1) {
                printf("Cavalo: Duas para cima e uma para direita (movimento %d)\n", i);
                break; // Finaliza movimento em "L"
            } else {
                continue; // Pula para a próxima iteração se ainda não completou o "L"
            }
        }
    }
}

int main() {

    int casasBispo = 5;
    int movimentosCavalo = 3;

    printf("Peça Torre\n");
    torre(5); // Peça Torre
    printf("Torre andou 5 casas para direita !\n");

    printf("\n========================\n");

    printf("Peça Bispo\n"); // Bispo

    moverBispo(casasBispo, 1, 1);
     
     printf("Bispo andou 5 casas diagonal para direita \n");

    printf("\n========================\n");

    printf("Peça Rainha\n");

    rainha(8);
    printf("Rainnha se moveu 8 casas para esquerda \n");

    printf("\n========================\n");

    printf("Peça Cavalo\n");

    moverCavalo(movimentosCavalo);
    printf("Cavalo se moveu em L\n");

    return 0;
}
