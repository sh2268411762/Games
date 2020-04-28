#include "test.h"




void shuffle(unsigned int wDeck[][FACES])
{
	for (size_t card = 1; card <= CARDS; card++)
	{
		size_t row;
		size_t col;
		do {
			row = rand() % SUITS;//0到3
			col = rand() % FACES;//0到12
		} while (wDeck[row][col] != 0);

		wDeck[row][col] = card;//1,2,3,4,……,51,52        牌的顺序号，表示洗牌后的第 …… 张扑克牌
	}
}

void deal(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[])
{
	for (size_t card = 1; card <= CARDS; card++)
	{
		for (size_t row = 0; row < SUITS; row++)
		{
			for (size_t col = 0; col < FACES; col++)
			{
				if (wDeck[row][col] == card)
				{
					Sleep(100);
					printf("%5s of %-8s%c", wFace[col], wSuit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}

void deal_F(unsigned int wDeck[][FACES],const char* wFace[],const char* wSuit[])
{
	//void Duizi(char arr[]);

	char su[5] = { 0 };
	//char su[5] = { 'M','M','M','M','M' };
	//char fa[5] = { 'A','2','3','4','5' };
	char fa[5] = { 0 };
	for (size_t card = 1; card <= FIVE; card++)
	{
		for (size_t row = 0; row < SUITS; row++)
		{
			for (size_t col = 0; col < FACES; col++)
			{
				if (wDeck[row][col] == card)
				{
					Sleep(100);
					
						fa[card - 1] = *wFace[col];
						su[card - 1] = *wSuit[row];

					printf("%5s of %-8s%c", wFace[col], wSuit[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
	puts("");
	
	//for (size_t i = 0; i < FIVE; i++)
	//{
	//	Sleep(100);
	//	printf("%5c of %-8c%c", fa[i], su[i], i % 2 == 0 ? '\n' : '\t');
	//	//printf("%5c of ", fa[i]);
	//	//printf("%-8s%c", su[i], i % 2 == 0 ? '\n' : '\t');
	//}
	printf("\n发牌完成，进行判定\n");
	Zhadan(fa);
	Shunzi(fa);
	Tonghua(su);
}

void Duizi(char arr[])
{
	int count = 0;
	if (arr[0] == arr[1] || arr[0] == arr[2] || arr[0] == arr[3] || arr[0] == arr[4])
	{
		count++;
	}
	if (arr[1] == arr[2] || arr[1] == arr[3] || arr[1] == arr[4])
	{
		count++;
	}
	if (arr[2] == arr[3] || arr[2] == arr[4])
	{
		count++;
	}
	if (arr[3] == arr[4])
	{
		count++;
	}

	if (1 == count)
	{
		printf("这副牌有一个对子\n");
	}
	else if (2 == count)
	{
		printf("这副牌有两个对子\n");
	}
	else
	{
		printf("这副牌没有对子\n");
	}
}

void Baozi(char arr[])
{
	int count = 0;
	if (arr[0] == arr[1] && arr[0] == arr[2] || arr[0] == arr[1] && arr[0] == arr[3] || arr[0] == arr[1] && arr[0] == arr[4] || arr[0] == arr[2] && arr[0] == arr[3] || arr[0] == arr[2] && arr[0] == arr[4] || arr[0] == arr[3] && arr[0] == arr[4])
	{
		count++;
	}
	if (arr[1] == arr[2] && arr[1] == arr[3] || arr[1] == arr[2] && arr[1] == arr[4] || arr[1] == arr[3] && arr[1] == arr[4])
	{
		count++;
	}
	if (arr[2] == arr[3] && arr[2] == arr[4])
	{
		count++;
	}

	if (1 == count)
	{
		printf("这副牌有一个豹子\n");
	}
	else
	{
		printf("这副牌没有豹子\n");
	}
}

void Zhadan(char a[])
{
	if (a[0] == a[1] && a[0] == a[2] && a[0] == a[3] || a[0] == a[1] && a[0] == a[2] && a[0] == a[4] || a[0] == a[1] && a[0] == a[3] && a[0] == a[4] || a[0] == a[2] && a[0] == a[3] && a[0] == a[4] || a[1] == a[2] && a[1] == a[3] && a[4] == a[1])
	{
		printf("这副牌有一个炸弹，没有豹子也没有对子\n");
	}
	else
	{
		printf("这副牌没有炸弹\n");
		Baozi(a);
		Duizi(a);
	}
}

void Shunzi(char a[])
{
	size_t i = 0;

	for (i = 0; i < FIVE; i++)
	{
		if ('A' == a[i])
		{
			a[i] = '0';
		}
		if ('J' == a[i])
		{
			a[i] = '11';
		}
		if ('Q' == a[i])
		{
			a[i] = '12';
		}
		if ('K' == a[i])
		{
			a[i] = '13';
		}
	}

	if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[0] != a[4] && a[1] != a[2] && a[1] != a[3] && a[1] != a[4] && a[2] != a[3] && a[2] != a[4] && a[3] != a[4])
	{
		char ret = a[0] + a[1] + a[2] + a[3] + a[4];
		if (ret / a[0] == 5 || ret / a[1] == 5 || ret / a[2] == 5 || ret / a[3] == 5 || ret / a[4] == 5)
		{
			printf("这副牌是顺子\n");
		}
		else
		{
			printf("这副牌不是顺子\n");
		}
	}
	else
	{
		printf("这副牌不是顺子\n");
	}
}
void Tonghua(char a[])
{
	if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == a[4])
	{
		printf("这副牌是同花\n");
	}
	else
	{
		printf("这副牌不是同花\n");
	}
}
