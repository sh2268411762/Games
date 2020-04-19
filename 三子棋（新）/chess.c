#include "chess.h"


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
