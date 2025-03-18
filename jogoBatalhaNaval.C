#include <stdio.h>


int main() {

    printf(">>>Jogo Batalha Naval<<<\n"); // Nome jogo
    printf("\n");
    
    // Definindo as letras das linhas
    char *linha[10] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };

    // Inicializando o tabuleiro
    int tabuleiro[10][10] = {0}; // Preenche o tabuleiro com 0, representando água

    // Definindo os navios
    int navioHorizontal[3] = {0, 1, 2}; // Navio horizontal em 3 posições
    int navioVertical[3] = {0, 1, 2}; // Navio vertical em 3 posições
    int navioDiagonal1[3] = {0, 1, 2}; // Navio Diagonal 1 em 3 posições 
    int navioDiagonal2[3] = {0, 1, 2}; // Navio Diagonal 2 em 3 posições

    // Coordenadas dos navios
    int linhaNavioHorizontal = 3; // Linha do navio horizontal
    int colunaNavioHorizontal = 2; // Coluna do navio horizontal
    int linhaNavioVertical = 5;   // Linha do navio vertical
    int colunaNavioVertical = 1;  // Coluna do navio vertical
    int linhaNavioDiagonal1 = 0; // Linha do navio diagonal 1
    int colunaNavioDiagonal1 = 0; // Coluna do navio diagonal 1
    int linhaNavioDiagonal2 = 2; // Linha do navio diagonal 2
    int colunaNavioDiagonal2 = 2; // Coluna do navio diagonal 2
   

    // Posicionando o navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3; // 3 representa as partes do navio
    }

    // Posicionando o navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavioVertical + i][colunaNavioVertical] = 3; // 3 representa as partes do navio
    }

    // Posicionando o navio diagonal 1 (da esquerda para a direita)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavioDiagonal1 + i][colunaNavioDiagonal1 + i] = 3; // 3 representa as partes do navio
    }

    // Posicionando o navio diagonal 2 (da direita para a esquerda)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavioDiagonal2 + i][10 - (colunaNavioDiagonal2 + i)] = 3; // 3 representa as partes do navio
    }


    // Exibindo o cabeçalho das colunas
    printf("  ");
    for (int j = 1; j <= 10; j++) {
        printf("%d ", j); // Números das colunas
    }
    printf("\n");

    // Exibindo o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%s ", linha[i]); // Imprime a letra da linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Mostra o valor no tabuleiro
        }
        printf("\n");
    }

    return 0;
}