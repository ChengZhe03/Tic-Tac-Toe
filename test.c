#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("***********************************\n");
	printf("**********  1 . play     **********\n");
	printf("**********  0 . exit     **********\n");
	printf("***********************************\n");
	printf("***********************************\n");
}

void game()
{
	int ret;
	char board[ROW][COL];
	Initboard(board, ROW, COL);//初始化棋盘
	displayboard(board, ROW, COL);//打印棋盘
	while (1)
	{
		playermove(board, ROW, COL);//玩家下棋
		system("cls");
		displayboard(board, ROW, COL);//打印棋盘
		ret = iswin(board, ROW, COL);//判断输赢
		if (ret != 'c')
			break;

		computermove(board, ROW, COL);//电脑下棋
		displayboard(board, ROW, COL);//打印棋盘
		iswin(board, ROW, COL);//判断输赢
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("恭喜玩家获胜\n");
	if (ret == '#')
		printf("恭喜电脑获胜\n");
	if (ret == 'q')
		printf("游戏平局\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：——>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏已结束\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}