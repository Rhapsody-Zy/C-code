#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i = 0;
    for (i = 0;i < rows; i++)
    {
        int j = 0;
        for (j = 0; j < cols, j++)
        {
            board[i][j] = set;
        }
    }
}

void DisPlayBoard(char mine[ROWS][COLS], int row, int col)
{
    
}
