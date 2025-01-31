#include <stdio.h>

// Aqui vou definir constantes para as direções:

#define CIMA "cima\n";
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUPERIOR_DIREITA "Diagonal Superior Direita\n"

// Aqui defini as constantes conforme solicitado: 
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

// A função para mover o bispo:
void moverBispo() {
    printf("Movimentacao do Bispo");
    for (int 1 = 0; i < CASAS_BISPO; i++) {
        printf(DIAGONAL_SUPERIOR_DIREITA);
    }
}

// Aqui a função para mover a torre:
void moverTorre() {
    printf ("Movimentacao da Torre");
    for (int i = 0; i < CASAS_TORRE; i++) {
        printf("DIREITA");

    }
}


