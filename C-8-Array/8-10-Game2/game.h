#include <stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char mine[ROWS][COLS], int rows, int cols, char set);
void DisPlayBoard(char mine[ROWS][COLS], int row, int col);
