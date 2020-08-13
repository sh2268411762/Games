//
//#include "game.h"
//
//void menu()
//{
//	printf("****************************************************\n");
//	printf("*************        1.play       ******************\n");
//	printf("*************        0.exit       ******************\n");
//	printf("****************************************************\n");
//}
//
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };//'0'
//	char show[ROWS][COLS] = { 0 };//'*'
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	DisplayBoard(show, ROW, COL);
//	SetMine(mine,ROW,COL);
//	//DisplayBoard(mine, ROW, COL);   //打印雷
//	FindMine(mine,show,ROW,COL);
//}
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：-->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//
//		case 0:
//			printf("退出-->\n");
//			break;
//
//		default:
//			printf("输入有误，请重新输入-->\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}