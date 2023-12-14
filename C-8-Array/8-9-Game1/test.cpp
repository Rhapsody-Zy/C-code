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
    //创建一个数组
    char board[ROW][COL] = {0};   //全部空格
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);

}

void test()
{
    int input = 0;
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