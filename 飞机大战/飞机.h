#ifndef _飞机_H_
#define _飞机_H_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define  high 25   //画布高
#define width 60   //画布宽
#define  border -1    //边界
#define   blank  0    //空白
#define   plane  1    //飞机
#define  bullet  2    //子弹
#define   enemy  3    //敌机
#define destroy  4    //摧毁标记


int canvas[high + 2][width + 2];  //游戏场景的高和宽
int pos_h, pos_w;   //飞机位置
int enemynum;    //敌机数量
int interval; //同个计次来模拟时间间隔
int itv_move; //敌机移动的时间间隔
int itv_new; //敌机刷新的时间间隔
int score;  //分数
int IsOver;  //判断游戏是否结束

void Startup();   //游戏数值初始化
void Show();    //游戏界面输出
void UpdateInput();     //因输入导致的游戏状态更新
void UpdateNormal();    //与输入无关的游戏状态更新
void HideCursor();		//隐藏光标
void gotoxy(int x, int y);		//回调光标	




#endif // !_飞机_H_

