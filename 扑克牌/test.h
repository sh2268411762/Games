#ifndef _TEST_H_
#define _TEST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#define SUITS 4
#define FACES 13
#define CARDS 52
#define FIVE 5


void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[]);
void deal_F(unsigned int wDeck[][FACES], const char* wFace[], const char* wSuit[]);
void Duizi(char arr[]);
void Baozi(char arr[]);
void Zhadan(char a[]);
void Shunzi(char a[]);

void Tonghua(char a[]);








#endif // !_TEST_H所有变量声明
