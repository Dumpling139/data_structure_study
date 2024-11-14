#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>
#include<locale.h>
#include<malloc.h>
#include<assert.h>
#include<time.h>
#define WALL L'□'
#define BODY L'●'
#define FOOD L'★'
//定义游戏状态
enum GameState {
	work = 1,
	kill_bywall,
	kill_byself,
	stop,
	esc
};
//定义方向
enum Dir {
	up = 1,
	down,
	left,
	right
};


//定义蛇身
typedef struct SnakeNode {
	int x;
	int y;
	struct SnakeNode* next;
}SnakeNode;
//定义贪吃蛇信息
typedef struct Snake
{
	int num;//玩家的总分
	int score;//一个食物的分数
	int sleeptime;//休眠时间
	enum GameState Gs;//游戏的状态
	enum Dir Dir;//蛇的方向
	SnakeNode* Food;//维护食物
	SnakeNode* Sh;//维护整条蛇
}Snake;
//定义按键是否被按过
#define KEY_PRESS(VK) ((GetAsyncKeyState(VK) & 0x1)?1:0)
//欢迎界面
void Welcome();
//打印地图
void PrintMap();
//初始化贪吃蛇
Snake* InitSnake();
//打印游戏数据
void PrintData(Snake* psnake);
//游戏开始
void GameStart();
//判断方向
void CheckDir(Snake* psnake);
//创建食物
SnakeNode* CreateFood(Snake* psnake);
//判断加速减速
void CheckSpeed(Snake* psnake);
//判断游戏状态
void CheckState(Snake* psnake);
//游戏进行中
void GameRun(psnake);
//查看是否被墙杀死
int CheckKW(Snake* psnake);
//查看是否被自己杀死
int CheckKS(Snake* psnake);
//走一步
void SnakeRun(Snake* psnake);
//吃到食物
void EatFood(Snake* psnake,SnakeNode* cur);
//没吃到食物
void NotEatFood(Snake* psnake,SnakeNode* cur);
//暂停
void SnakeStop(Snake* psnake);
//设置坐标
void SetPos(int x,int y);
//游戏开始
void GameStart();
//游戏结束
void GameEnd();