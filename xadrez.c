#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Variáveis declaradas

    int bispo, torre, rainha, cavalo = 0;
    char direcao[20], direcao2[20], direcao3[20], direcao4[20], direcao5[20], direcao6[20];
    int i = 0, j = 0;

    // Entrada de dados do usuário para o Bispo

    printf("Indique quantas vezes o Bispo deve se mover: \n");
    scanf("%d", &bispo);
    printf("Indique qual a direção(ex.: esquerda, cima):\n");
    scanf("%s", &direcao);
    scanf("%s", &direcao2);

    // Movimentação do Bispo em diagonal com estrutura While

    printf("Movimento do Bispo(simulando uma diagonal): \n");

    while (i < bispo)
    {
        printf("%s, %s\n", direcao, direcao2);
        ++i;
    }
    printf("\n");

    //Entrada de dados do usuário para a Torre

    printf("Indique quantas vezes a Torre deve se mover:\n");
    scanf("%d", &torre);
    printf("Indique a direção(direita ou esquerda, cima ou baixo):\n");
    scanf("%s", &direcao3);

    // Movimentação da Torre com estrutura Do-While

    printf("Movimento da Torre: \n");
    do
    {
        printf("%s\n", direcao3);
        j++;
    } while (j < torre);
    printf("\n");

    //Entrada de dados do usuário para a Rainha

    printf("Indique quantas vezes a Rainha deve se mover:\n");
    scanf("%d", &rainha);
    printf("Indique a direção(direita, esquerda, cima, etc.):\n");
    scanf("%s", &direcao4);

    // Movimentação da Rainha com estrutura For

    printf("Movimentação da Rainha: \n");
    for (i = 0; i < rainha; i++)
    {
        printf("%s\n", direcao4);
    }
    printf("\n");
    
    //Entrada de dados do usuário para o Cavalo

    printf("Indique a direção que o Cavalo deve andar(Ex: cima, cima, esquerda):\n");
    scanf("%s", &direcao5);
    scanf("%s", &direcao6);

    // Movimentação do Cavalo em L usando loops aninhados

    printf("Movimentação do Cavalo: \n");
    
    for (int i = 1; i >= 1 ; i--)
    {
        while (cavalo < 2)
        {
            printf("%s\n", direcao5);
            cavalo++;
        }
        printf("%s\n", direcao6);
        
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
