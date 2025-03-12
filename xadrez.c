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
    for (int i = 0, j = 2; i < 1 && j > 0; i++, j--)
    {
        
    }
    //i roda uma vez
    //j roda duas vezes 
    //continue pula uma iteração
    // break para o programa
    

    return 0;
}
