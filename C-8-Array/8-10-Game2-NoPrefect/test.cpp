#include "game.h"
#include "game.c"

void menu()
{
    printf("*************************\n");
    printf("******   1.play    ******\n");
    printf("******   0.exit    ******\n");
    printf("*************************\n");
}

void game()
{
    char mine[ROWS][COLS] = {0};    //存放布置好的雷的信息
    char show[ROWS][COLS] = {0};    //存放排查出的雷的信息
    //初始化数组的内容为指定的内容
    //mine 数组在没有布置雷的时候，都是'0'
    InitBoard(mine, ROWS, COLS, '0');
    //shou 数组在没有排查雷的时候，都是'*'
    InitBoard(show, ROWS, COLS, '*');

    //打印两数组
    //DisPlayBoard(mine, ROW, COL);
    //设置雷
    SetMine(mine, ROW, COL);
    //DisPlayBoard(mine, ROW, COL);
    DisPlayBoard(show, ROW, COL);
    //排查雷
    FindMine(mine, show, ROW, COL);

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
            printf("游戏结束\n");
            break;
        default:
            printf("选择错误，请重新选择！\n");
            break;
        
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}
    
