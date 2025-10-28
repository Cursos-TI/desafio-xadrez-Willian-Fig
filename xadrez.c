#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i = 0;

    printf("Peça Torre\n"); // Torre
    while (i < 5)
    {
        printf(" Mover para a direita \n", i); // Imprime a direção do movimento da torre

        i++;
    }
    printf("Torre andou 5 casas para direita !\n");

    printf("\n========================\n");

    printf("Peça Bispo\n"); // Bispo

     int b = 1;

    do
    {
    printf(" Mover para Cima direita \n", b); // Imprime a direção do movimento do Bispo
    b++;
    } while (b <= 5);
     printf("Bispo andou 5 casas diagonal para direita \n");

    printf("\n========================\n");

    printf("Peça Rainha\n"); //Rainha

    for (int r = 0; r < 8; r++) 
    {
        printf("Mover para esquerda Esquerda \n"); //Imprime a direção do moviemnto da rainha
    }
    printf("Rainha se moveu 8 casas para esquerda \n");

    printf("\n========================\n");

    printf("Peça Cavalo\n");

    int movimetocavalo = 1; //variavel para movimeto do cavalo

    while (movimetocavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); //Imprime "Baixo duas vezes"
        }
        printf("Esquerda\n"); //Imprime "Esquerda" uma vez.
    }
    
    printf("Cavalo se moveu em L\n");

    return 0;
}
