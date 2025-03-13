#include <stdio.h>

// Desafio de Xadrez - MateCheck

void torre(int t){
    if (t > 0)
    {
        torre (t - 1);
        printf("Direita\n", t);
    }
}

void rainha(int r){
    if (r > 0)
    {
        rainha (r - 1);
        printf("Esquerda\n", r);
    }
}

void bispo(int b){
    if (b > 0)
    {
        for (int b = 0; b >= 0; b--)
    {
        for (int a = 0; a < 1; a++)
        {
            printf("Direita\n");
        }
        printf("Cima\n");
    }
    bispo (b - 1);
    }
}

int main() {
    // Variáveis declaradas
    int movimento_torre = 5, movimento_rainha = 8, movimento_bispo = 5;

    //Funções recursivas para o movimento das peças

    printf("Movimentação da Torre:\n");
    torre(movimento_torre);
    printf("\n");

    printf("Movimentação da Rainha:\n");
    rainha(movimento_rainha);
    printf("\n");

    //Movimentação do bispo com função recursiva e loops aninhados

    printf("Movimento do Bispo:\n");
    bispo(movimento_bispo);
    printf("\n");

    // Movimentação do Cavalo em L usando loops com variáveis múltiplas e condições avançadas
    // Inclua o uso de continue e break dentro dos loops

    printf("Movimentação do Cavalo:\n");
    for (int i = 0, j = 5; i < 5 && j > 0; i += (i % 2 == 0) ? 1 : 2, j--)
    {
        if(i > 0){
            printf("Cima\n");
            continue;
        }

        if(j > 0){
            printf("Direita\n");
        }   
    }

    return 0;
}
