//������������Ϸ

#include "game.h"

void menu()
{
	printf("*************************\n");
	printf("****1.��ʼ     0.�˳�****\n");
	printf("*************************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);
	DispiayBoard(board,ROW,COL);
	while (1)
	{
		PlayMove(board,ROW,COL);
		DispiayBoard(board, ROW, COL);
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DispiayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}