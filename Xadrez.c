#include <stdio.h>

// ==============================
// Funções recursivas para o nível MESTRE
// ==============================

// Torre - recursivo: direita
void moverTorreDireita(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// Bispo - recursivo + loop aninhado
void moverBispoDiagonalRecursivo(int casas) {
    if (casas <= 0) return;

    for (int i = 0; i < 1; i++) {  // vertical (cima)
        for (int j = 0; j < 1; j++) {  // horizontal (direita)
            printf("Cima Direita\n");
        }
    }

    moverBispoDiagonalRecursivo(casas - 1);
}

// Rainha - recursivo: esquerda
void moverRainhaEsquerda(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// ==============================
// Função principal
// ==============================
int main() {
    // ---------- NÍVEL NOVATO ----------
    printf("=== Torre (for - Direita) ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n=== Bispo (while - Diagonal Cima Direita) ===\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n=== Rainha (do-while - Esquerda) ===\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    // ---------- NÍVEL AVENTUREIRO ----------
    printf("\n=== Cavalo (Loops Aninhados - Baixo, Baixo, Esquerda) ===\n");
    for (int i = 0; i < 1; i++) {
        int l = 0;
        while (l < 2) {
            printf("Baixo\n");
            l++;
        }
        printf("Esquerda\n");
    }

    // ---------- NÍVEL MESTRE ----------
    printf("\n=== Torre Recursiva (Direita) ===\n");
    moverTorreDireita(5);

    printf("\n=== Bispo Recursivo com Loops Aninhados (Cima Direita) ===\n");
    moverBispoDiagonalRecursivo(5);

    printf("\n=== Rainha Recursiva (Esquerda) ===\n");
    moverRainhaEsquerda(8);

    printf("\n=== Cavalo (Loops complexos - Cima, Cima, Direita) ===\n");
    for (int x = 0; x < 3; x++) {
        if (x < 2) {
            printf("Cima\n");
            continue;
        }

        for (int y = 0; y < 1; y++) {
            if (y == 0) {
                printf("Direita\n");
                break;
            }
        }
    }

    return 0;
}
