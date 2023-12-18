#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            board[i][j] = ' ';
        }
    }
}
// void DisplayBoard(char board[ROW][COL], int row, int col)
// {
//     int i = 0;
//     for (i = 0; i < ROW; i++)
//     {
//         //1.打印一行数据
//         printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
//         //2.打印一行分割符
//         if (i < ROW - 1)
//         printf("---|---|---\n");
//     }
// }
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < ROW; i++)
    {
        int j = 0;
        for (j=0;j<col;j++)
        {
            //1、打印一行数据
            printf("  %c", board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }     
        }
        printf("\n"); 
            //2、打印分割行
        if (i < row - 1)
        {
            for (j=0;j<col;j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
        }
        printf("\n");
    }
}
