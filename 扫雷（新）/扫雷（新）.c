//#include "58.h"
//
//
//#define ROW 12
//#define COL 12
//#define NUM 20
//
//
//static void Menu()
//{
//	printf("****************************************************\n");
//	printf("*************        1.play       ******************\n");
//	printf("*************        0.exit       ******************\n");
//	printf("****************************************************\n");
//}
//
//void InitBoard(char board[ROW][COL], int row, int col, char set)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void SetMine(char mine[ROW][COL], int row, int col)//分布雷
//{
//	int n = NUM;
//	while (n)
//	{
//		int x = rand() % (row - 2) + 1;
//		int y = rand() % (col - 2) + 1;
//		if (mine[x][y] == 1)
//		{
//			continue;
//		}
//
//		mine[x][y] = '1';
//		n--;
//	}
//}
//
//void ShowBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	printf("   ");
//	for (i = 1; i <= col - 2; i++)
//	{
//		printf(" %-2d|", i);
//	}
//	puts("");
//	for (i = 1; i <= col - 2; i++)
//	{
//		printf("%3s", "----");
//	}
//	printf("---");
//	puts("");
//
//	for (i = 1; i <= row - 2; i++)
//	{
//		printf("%2d|", i);
//		int j = 1;
//		for (j = 1; j <= col - 2; j++)
//		{
//			printf(" %-2c|", board[i][j]);
//		}
//		puts("");
//		for (j = 1; j <= col - 2; j++)
//		{
//			printf("%3s", "----");
//		}
//		printf("---");
//		puts("");
//	}
//}
//
//char GetNUM(char mine[ROW][COL], int x, int y)
//{
//	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 7 * '0';
//
//}
//void game()
//{
//	printf("游戏开始\n");
//	srand((unsigned long)time(NULL));
//	char board[ROW][COL];
//	char mine[ROW][COL];
//
//	InitBoard(board, ROW, COL, '*');//初始化
//	InitBoard(mine, ROW, COL, '0');//初始化
//
//	SetMine(mine, ROW, COL);
//	int count = (ROW - 2) * (COL - 2) - NUM;
//
//	do {
//		system("cls");
//		int x = 0;
//		int y = 0;
//		ShowBoard(board, ROW, COL);
//		printf("请输入坐标：-->");
//		(void)scanf("%d%d", &x, &y);
//		if (x < 1 || x>10 || y < 1 || y>10)
//		{
//			printf("输入有误\n");
//			continue;
//		}
//
//		if (board[x][y] != '*')
//		{
//			printf("坐标被占用\n");
//			Sleep(1000);
//			continue;
//		}
//
//		if (mine[x][y] == '0')
//		{
//			count--;
//			char num = GetNUM(mine, x, y);
//			board[x][y] = num;
//		}
//		else
//		{
//			printf("这是雷(%d,%d)\n", x, y);
//			printf("孩子，你无了\n");
//			break;
//		}
//	} while (count > 0);
//
//	char* result = NULL;
//	if (count > 0)
//	{
//		result = "##  兄弟，你被炸死了  ##\n";
//		printf("########################\n");
//		printf("%s", result);
//		printf("########################\n");
//	}
//	else
//	{
//		result = "##      排雷成功      ##\n";
//		printf("########################\n");
//		printf("%s", result);
//		printf("########################\n");
//	}
//
//
//	ShowBoard(mine, ROW, COL);
//}
//int main()
//{
//	printf("hello mine clear\n");
//	int quit = 0;
//	do
//	{
//		int select = 0;
//		Menu();
//		(void)scanf("%d", &select);
//		switch (select)
//		{
//		case 1:
//			game();
//			printf("再来一局？\n");
//			break;
//
//		case 0:
//			quit = 1;
//			printf("拜拜，孩子\n");
//			break;
//
//		default:
//			printf("输入有问题，重新输入\n");
//			break;
//		}
//	} while (!quit);
//	return 0;
//}