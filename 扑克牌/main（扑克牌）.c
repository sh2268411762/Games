//#include "test.h"
//
//
//int main()
//{
//	unsigned int deck[SUITS][FACES] = { 0 };//定义一个4*13的数组，初始化为0
//
//	srand((unsigned int)time(NULL));
//	shuffle(deck);
//	const char* suit[SUITS] = { "H红桃","F方块","M梅花","h黑桃" };//花色指针
//
//	const char* face[FACES] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };//牌面指针
//
//	printf("开始洗牌\n");
//	Sleep(2000);
//	deal(deck, face, suit);
//	printf("洗牌完成，即将发牌\n\n");
//	Sleep(1000);
//
//	printf("Player手中的牌：\n");
//	deal_F(deck, face, suit);
//	printf("\n发牌完成!!!\n");
//
//	return 0;
//}