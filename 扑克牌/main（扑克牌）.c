//#include "test.h"
//
//
//int main()
//{
//	unsigned int deck[SUITS][FACES] = { 0 };//����һ��4*13�����飬��ʼ��Ϊ0
//
//	srand((unsigned int)time(NULL));
//	shuffle(deck);
//	const char* suit[SUITS] = { "H����","F����","M÷��","h����" };//��ɫָ��
//
//	const char* face[FACES] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };//����ָ��
//
//	printf("��ʼϴ��\n");
//	Sleep(2000);
//	deal(deck, face, suit);
//	printf("ϴ����ɣ���������\n\n");
//	Sleep(1000);
//
//	printf("Player���е��ƣ�\n");
//	deal_F(deck, face, suit);
//	printf("\n�������!!!\n");
//
//	return 0;
//}