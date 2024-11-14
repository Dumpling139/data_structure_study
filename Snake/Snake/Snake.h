#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include<locale.h>
#include<malloc.h>
#include<assert.h>
#include<time.h>
#define WALL L'��'
#define BODY L'��'
#define FOOD L'��'
//������Ϸ״̬
enum GameState {
	work = 1,
	kill_bywall,
	kill_byself,
	stop,
	esc
};
//���巽��
enum Dir {
	up = 1,
	down,
	left,
	right
};


//��������
typedef struct SnakeNode {
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode;
//����̰������Ϣ
typedef struct Snake
{
	int num;//��ҵ��ܷ�
	int score;//һ��ʳ��ķ���
	int sleeptime;//����ʱ��
	enum GameState Gs;//��Ϸ��״̬
	enum Dir Dir;//�ߵķ���
	SnakeNode* Food;//ά��ʳ��
	SnakeNode* Sh;//ά��������
}Snake;
//���尴���Ƿ񱻰���
#define KEY_PRESS(VK) ((GetAsyncKeyState(VK) & 0x1)?1:0)
//��ӭ����
void Welcome();
//��ӡ��ͼ
void PrintMap();
//��ʼ��̰����
Snake* InitSnake();
//��ӡ��Ϸ����
void PrintData(Snake* psnake);
//��Ϸ��ʼ
void GameStart();
//�жϷ���
void CheckDir(Snake* psnake);
//����ʳ��
SnakeNode* CreateFood(Snake* psnake);
//�жϼ��ټ���
void CheckSpeed(Snake* psnake);
//�ж���Ϸ״̬
void CheckState(Snake* psnake);
//��Ϸ������
void GameRun(psnake);
//�鿴�Ƿ�ǽɱ��
int CheckKW(Snake* psnake);
//�鿴�Ƿ��Լ�ɱ��
int CheckKS(Snake* psnake);
//��һ��
void SnakeRun(Snake* psnake);
//�Ե�ʳ��
void EatFood(Snake* psnake,SnakeNode* cur);
//û�Ե�ʳ��
void NotEatFood(Snake* psnake,SnakeNode* cur);
//��ͣ
void SnakeStop(Snake* psnake);
//��������
void SetPos(int x,int y);
//��Ϸ��ʼ
void GameStart();
//��Ϸ����
void GameEnd();