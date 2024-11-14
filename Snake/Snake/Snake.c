#include"Snake.h"

void SetPos(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获得句柄
	COORD pos = { x,y };
	SetConsoleCursorPosition(handle, pos);//句柄的光标设置
}

//欢迎界面
void Welcome()
{
	//打印开始游戏的第一页
	SetPos(50, 5);
	printf("欢迎来到贪吃蛇小游戏");
	SetPos(50, 25);
	system("pause");
	//打印第二页
  	system("cls");
	SetPos(45, 10);
	printf("使用↑.↓.←.→来控制蛇的方向");
	SetPos(50, 11);
	printf("F3为加速，F4为减速");
	SetPos(49, 12);
	printf("加速能取得更高的分数");
	SetPos(50, 25);
	system("pause");
	system("cls");
}
//打印地图
void PrintMap()
{
	SetPos(0, 0);
	for(int i = 0; i < 29; i++)
	{
		wprintf(L"%lc", WALL);
	}
	SetPos(0,28);
	for (int i = 0; i < 29; i++)
	{
		wprintf(L"%lc", WALL);
	}
	for (int i = 1; i < 28; i++)
	{
		SetPos(0,i);
		wprintf(L"%lc", WALL);
	}
	for (int i = 1; i < 28; i++)
	{
		SetPos(56,i);
		wprintf(L"%lc", WALL);
	}
	SetPos(60, 10);
	printf("得分：");
	SetPos(70, 10);
	printf("每个食物得分：");
	SetPos(60, 14);
	printf("不能穿墙，不能咬到自己");
	SetPos(60, 15);
	printf("用↑.↓.←.→控制蛇的移动.");
	SetPos(60, 16);
	printf("F3为加速，F4为减速.");
	SetPos(60, 17);
	printf("ESC：退出游戏.SPACE：暂停游戏");

}
//初始化贪吃蛇
Snake* InitSnake()
{
	SnakeNode* cur = NULL;
	Snake* snake = (Snake*)malloc(sizeof(Snake));
	assert(snake);
	snake->Sh = NULL;
	snake->score = 80;
	snake->Dir = right;
	snake->Gs = work;
	snake->num = 0;
	snake->sleeptime = 200;
	for (int i = 0; i < 5; i++)
	{
		cur = (SnakeNode*)malloc(sizeof(SnakeNode));
		assert(cur);
		cur->x = 14 + 2 * i;
		cur->y = 13;
		cur->next = NULL;
		if (snake->Sh == NULL)
		{
			snake->Sh = cur;
		}
		else
		{
			cur->next = snake->Sh;
			snake->Sh = cur;
		}
	}
	cur = snake->Sh;
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", BODY);
		cur = cur->next;
	}
	CreateFood(snake);
	PrintData(snake);
	return snake;
}
//打印游戏数据
void PrintData(Snake* snake)
{
	assert(snake);
	SetPos(66, 10);
	printf("%02d", snake->num);
	SetPos(84, 10);
	printf("%02d", snake->score);
}
//游戏开始
void GameStart()
{
	setlocale(LC_ALL, "");//修改为本地环境
	system("mode con cols=120 lines=30");//调整控制台大小
	system("title 贪吃蛇");//调整游戏名
	//隐藏光标
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//获得句柄
	CONSOLE_CURSOR_INFO cursor_info = { 0 };//光标
	GetConsoleCursorInfo(handle, &cursor_info);//得到控制台光标
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(handle, &cursor_info);//输入控制台光标
	//欢迎界面
	Welcome();
	//打印地图
	PrintMap();
}
//判断方向
void CheckDir(Snake* psnake)
{
	//不能反向走
	if (psnake->Dir == left && KEY_PRESS(VK_RIGHT) ||
		psnake->Dir == up && KEY_PRESS(VK_DOWN) ||
		psnake->Dir == right && KEY_PRESS(VK_LEFT) ||
		psnake->Dir == down && KEY_PRESS(VK_UP))
	{
		return;
	}
	if (KEY_PRESS(VK_LEFT))//左箭头
	{
		psnake->Dir = left;
	}
	else if (KEY_PRESS(VK_UP))//上箭头
	{
		psnake->Dir = up;
	}
	else if (KEY_PRESS(VK_RIGHT))//右箭头
	{
		psnake->Dir = right;
	}
	else if (KEY_PRESS(VK_DOWN))//下箭头
	{
		psnake->Dir = down;
	}
}
//创建食物
SnakeNode* CreateFood(Snake* psnake)
{
	srand((unsigned int)time(NULL));
	SnakeNode* cur = (SnakeNode*)malloc(sizeof(SnakeNode));
	assert(cur);
one:
	cur->x = (rand() % 27 + 1) * 2;
	cur->y = rand() % 27 + 1;
	SnakeNode* tmp = psnake->Sh;
	while (tmp)
	{
		if (tmp->x == cur->x && tmp->y == cur->y)
		{
			goto one;
		}
		tmp = tmp->next;
	}
	psnake->Food = cur;
	SetPos(psnake->Food->x, psnake->Food->y);
	wprintf(L"%lc", FOOD);
	return cur;
}
//判断加速减速
void CheckSpeed(Snake* psnake)
{
	if (KEY_PRESS(VK_F3)&&psnake->sleeptime>100)//加速
	{
		psnake->sleeptime -= 100;
		psnake->score += 10;
		PrintData(psnake);
	}
	else if(KEY_PRESS(VK_F4) &&psnake->sleeptime<1000)//减速
	{
		psnake->sleeptime += 100;
		psnake->score -= 10;
		PrintData(psnake);
	}
}
//判断游戏状态
void CheckState(Snake* psnake)
{
	if (KEY_PRESS(VK_SPACE))//判断是否暂停
	{
		psnake->Gs = stop;
		SnakeStop(psnake);
	}
	else if (KEY_PRESS(VK_ESCAPE))
	{
		psnake->Gs = esc;
		system("cls");
		SetPos(50, 15);
		printf("已退出，游戏结束。");
	}
	else if (CheckKW(psnake))//
	{
		psnake->Gs = kill_bywall;
		system("cls");
		SetPos(50, 15);
		printf("撞到墙了，游戏结束。");
	}
	else if (CheckKS(psnake))
	{
		psnake->Gs = kill_byself;
		system("cls");
		SetPos(50, 15);
		printf("吃到自己了，游戏结束。");
	}
}
//查看是否被墙杀死
int CheckKW(Snake* psnake)
{
	if (psnake->Sh->x == 0 ||
		psnake->Sh->x == 56 ||
		psnake->Sh->y == 0 ||
		psnake->Sh->y == 28)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//查看是否被自己杀死
int CheckKS(Snake* psnake)
{
	SnakeNode* cur = psnake->Sh->next;
	while (cur)
	{
		if (cur->x == psnake->Sh->x && cur->y == psnake->Sh->y)
		{
			return 1;
		}
		cur = cur->next;
	}
	return 0;
}
//走一步
void SnakeRun(Snake* psnake)
{
	SnakeNode* cur = (SnakeNode*)malloc(sizeof(SnakeNode));
	assert(cur);
	cur->x = psnake->Sh->x;
	cur->y = psnake->Sh->y;
	if (psnake->Dir == up)
	{
		cur->y--;
	}
	else if (psnake->Dir == down)
	{
		cur->y++;
	}
	else if (psnake->Dir == left)
	{
		cur->x-=2;
	}
	else if (psnake->Dir == right)
	{
		cur->x+=2;
	}
	if (cur->x == psnake->Food->x && cur->y == psnake->Food->y)//如果有食物
	{
		EatFood(psnake,cur);
	}
	else//如果没食物
	{
		NotEatFood(psnake,cur);
	}
}
//吃到食物
void EatFood(Snake* psnake,SnakeNode* cur)
{
	cur->next = psnake->Sh;
	psnake->Sh = cur;
	SnakeNode* tmp = psnake->Sh;
	while (tmp)
	{
		SetPos(tmp->x, tmp->y);
		wprintf(L"%lc", BODY);
		tmp = tmp->next;
	}
	psnake->num += psnake->score;
	PrintData(psnake);
	CreateFood(psnake);
}
//没吃到食物
void NotEatFood(Snake* psnake,SnakeNode* cur)//可能有问题
{
	//头插cur
	cur->next = psnake->Sh;
	psnake->Sh = cur;
	SnakeNode* tmp = psnake->Sh;
	while (tmp->next->next != NULL)
	{
		SetPos(tmp->x, tmp->y);
		wprintf(L"%lc", BODY);
		tmp = tmp->next;
	}
	SetPos(tmp->next->x, tmp->next->y);
	printf("  ");
	free(tmp->next);
	tmp->next = NULL;

}
//暂停
void SnakeStop(Snake* psnake)
{
	SetPos(60, 5);
	printf("游戏已暂停");
	while (1)
	{
		Sleep(200);
		if (KEY_PRESS(VK_SPACE))
		{
			SetPos(60, 5);
			printf("          ");
			psnake->Gs = work;
			break;
		}
	}
}
//游戏进行中
void GameRun()
{
	Snake* psnake = InitSnake();
	while (psnake->Gs == work)
	{
		//睡眠一下
		Sleep(psnake->sleeptime);
		//走一步
		SnakeRun(psnake);
		//判断方向
		CheckDir(psnake);
		//判断加速减速
		CheckSpeed(psnake);
		//判断游戏状态
		CheckState(psnake);
	}
}

