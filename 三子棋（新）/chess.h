#ifndef _CHESS_H_
#define _CHESS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <math.h>
#include <time.h>


#define ROW 3
#define COL 3


void menu();
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
void game();





#endif // !_CHESS_H_所有变量声明