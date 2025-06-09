#include <stdio.h>

void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoComLoops(int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Cima, Direita\n");
            break;
        }
    }
}

void moverCavalo() {
    int cima = 2;
    int direita = 1;

    for (int i = 0; i < cima; i++) {
        if (i == 1) continue;
        printf("Cima\n");
        if (i == cima - 1) break;
    }

    int j = 0;
    while (j < direita) {
        printf("Direita\n");
        j++;
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int linhasBispo = 5;
    int colunasBispo = 1;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(linhasBispo, colunasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
