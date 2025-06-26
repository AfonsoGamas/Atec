#include <stdio.h>

int linha_correta(int sudoku[][], int linha){
    char num[9];
    for(int i = 0; i < 9; i++){
        if(sudoku[linha][i] == num[]){
                num[i] =
                }
    };
}

int main(){
    char sudoku[9][9] = {
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
    printf("%s", sudoku);
}
