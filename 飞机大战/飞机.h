#ifndef _�ɻ�_H_
#define _�ɻ�_H_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define  high 25   //������
#define width 60   //������
#define  border -1    //�߽�
#define   blank  0    //�հ�
#define   plane  1    //�ɻ�
#define  bullet  2    //�ӵ�
#define   enemy  3    //�л�
#define destroy  4    //�ݻٱ��


int canvas[high + 2][width + 2];  //��Ϸ�����ĸߺͿ�
int pos_h, pos_w;   //�ɻ�λ��
int enemynum;    //�л�����
int interval; //ͬ���ƴ���ģ��ʱ����
int itv_move; //�л��ƶ���ʱ����
int itv_new; //�л�ˢ�µ�ʱ����
int score;  //����
int IsOver;  //�ж���Ϸ�Ƿ����

void Startup();   //��Ϸ��ֵ��ʼ��
void Show();    //��Ϸ�������
void UpdateInput();     //�����뵼�µ���Ϸ״̬����
void UpdateNormal();    //�������޹ص���Ϸ״̬����
void HideCursor();		//���ع��
void gotoxy(int x, int y);		//�ص����	




#endif // !_�ɻ�_H_

