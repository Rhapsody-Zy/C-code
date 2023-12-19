#include "game.h"
#include "game.cpp"
void menu()
{
    printf("***************************\n");
    printf("*****1.play   0.exit ******\n");
    printf("***************************\n");
}

void game()
{
    char ret = 0;
    //创建一个数组
    char board[ROW][COL] = {0};   //全部空格
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    //下棋
    while (1)
    {
        //玩家下棋
        PlayMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
        ret = IsWin(board, ROW, COL);
        if (ret != 'C')
        {
            break;
        }
    }
    if (ret == '*')
    {
        printf("玩家赢了！\n");
    }
    else if (ret == '#')
    {
        printf("电脑赢了!\n");
    }
    else 
    {
        printf("平局！\n");
    }
    

}

void test()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误!\n");
            break;
        }
    } while (input);
    
}

int main()
{
    test();
    return 0;
}
