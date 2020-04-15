﻿#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROW  3
#define COL  3
void menu()
{
	printf("**********************************************\n");
	printf("************      1. play    *****************\n");
	printf("************      0. exit    *****************\n");
	printf("**********************************************\n");
}
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
	//memset(&board[0][0],' ',row*col*sizeof(board[0][0]));
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	/*int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1)
		{
			printf("---|---|---");
		}
	}*/

	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:-->\n\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:-->\n\n");
	while (1)
	{
		printf("请输入坐标：-->\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '0';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入:-->\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入:-->\n");
		}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] ==' ')
			return 0;
		}

	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			{
				return board[i][0];
			}
		}
		for (i = 0; i < col; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			{
				return board[0][i];
			}
		}
		if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
	//说明没有赢,判断平局
	if (IsFull(board, row, col))// == 1
	{
		return 'Q';
	}
	return ' ';
}

void game()
{
	//printf("玩游戏\n");
	char board[ROW][COL] = { 0 };
	char ret = 0;
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		PlayerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != ' ')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == 'X')
	{
		printf("电脑赢！\n\n");
	}
	else if (ret == '0')
	{
		printf("玩家赢！\n\n");
	}
	else if (ret == 'Q')
	{
		printf("平局！\n\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();

		printf("请选择：-->\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;

		case 0:
			printf("退出\n");
			break;

		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
//IsWin
//'X'  电脑
//'0'   玩家
//'Q'   平局
//' '   继续