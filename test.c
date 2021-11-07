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
	Initboard(board, ROW, COL);//��ʼ������
	displayboard(board, ROW, COL);//��ӡ����
	while (1)
	{
		playermove(board, ROW, COL);//�������
		system("cls");
		displayboard(board, ROW, COL);//��ӡ����
		ret = iswin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'c')
			break;

		computermove(board, ROW, COL);//��������
		displayboard(board, ROW, COL);//��ӡ����
		iswin(board, ROW, COL);//�ж���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
		printf("��ϲ��һ�ʤ\n");
	if (ret == '#')
		printf("��ϲ���Ի�ʤ\n");
	if (ret == 'q')
		printf("��Ϸƽ��\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񣺡���>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("��Ϸ�ѽ���\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}