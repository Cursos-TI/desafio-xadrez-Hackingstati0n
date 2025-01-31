#include <stdio.h>

// Aqui o as constantes para as direções
#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUPERIOR_DIREITA "Diagonal Superior Direita\n"

// Aqui definindo constantes para o número de casas que cada peça pode se mover
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

// Função para movera o Bispo
void moverBispo() {
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
        printf(DIAGONAL_SUPERIOR_DIREITA);
    }
}

// Função para movera a Torre
void moverTorre() {
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf(DIREITA);
    }
}

// Função para movera a Rainha
void moverRainha() {
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < CASAS_RAINHA; i++) {
        printf(ESQUERDA);
    }
}

int main() {
    // A função para mover as peças
    moverBispo();
    moverTorre();
    moverRainha();

    return 0;
}
