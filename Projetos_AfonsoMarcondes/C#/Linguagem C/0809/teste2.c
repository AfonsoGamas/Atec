#include <stdio.h>

#define TRUE 1
#define FALSE 0

int linha_correta(int **sudoku, int n_linha) {
    int numeros[9] = {0};  // Vetor para marcar os números de 1 a 9

    // Verifica cada número da linha
    for (int i = 0; i < 9; i++) {
        int num = sudoku[n_linha][i];
        if (num >= 1 && num <= 9) {
            if (numeros[num - 1] == 1) {
                return FALSE;  // Se já aparecer o número, retorna falso
            }
            numeros[num - 1] = 1;  // Marca o número como visto
        }
    }

    return TRUE;  // Se todos os números de 1 a 9 forem únicos, retorna verdadeiro
}

int main() {
    int *sudoku[9];
    int sudoku_matrix[9][9] = {
        {9, 0, 0, 0, 8, 0, 3, 0, 0},
        {2, 0, 0, 2, 5, 0, 7, 0, 0},
        {0, 2, 0, 3, 0, 0, 0, 0, 4},
        {2, 9, 4, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 7, 3, 0, 5, 6, 0},
        {7, 0, 5, 0, 6, 0, 4, 0, 0},
        {0, 0, 7, 8, 0, 3, 9, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 3},
        {3, 0, 0, 0, 0, 0, 0, 0, 2}
    };

    // Ponteiros para as linhas de sudoku
    for (int i = 0; i < 9; i++) {
        sudoku[i] = sudoku_matrix[i];
    }

    printf("linha_correta(sudoku, 0) -> %d\n", linha_correta(sudoku, 0));  // False
    printf("linha_correta(sudoku, 1) -> %d\n", linha_correta(sudoku, 1));  // True

    return 0;
}
