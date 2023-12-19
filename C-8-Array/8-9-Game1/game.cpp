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
void PlayMove(char board[ROW][COL],int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走\n");
    while (1)
    {
        printf("请输入要走的坐标:>");
        scanf("%d %d", &x, &y);
        if (x>=1 && x<=ROW && y>=1 && y<=COL)
        {
            if (board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("坐标已被占用\n");
            }
            
        }
        else
        {
            printf("坐标非法，请重新输入！\n");
        }
    }
    
    
}
void ComputerMove(char board[ROW][COL],int row, int col)
{
    int x = 0;
    int y = 0;
    printf("电脑走:>\n");

    while (1)
    {
        x = rand() % ROW;
        y = rand() % COL;
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
    
}

//返回1表示棋盘满了
//返回0表示棋盘没满
int IsFull(char board[ROW][COL],int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (board[i][j] == ' ')
            {
                return 0;   //没满
            }
        }
    }
    return 1;   //满了
}

char IsWin(char board[ROW][COL],int row, int col)
{
    int i = 0;
    //横三行
    for (i = 0; i < ROW; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
        {
            return board[i][0];
        }
    }
    //竖三列
    for (i = 0; i < COL; i++)
    {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
        {
            return board[0][i];
        }
    }
    //对角线
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
    {
        return board[0][2];
    }
    //判断平局
    if (1 == IsFull(board, ROW, COL))
    {
        return 'Q';
    }
    return 'C';
}
