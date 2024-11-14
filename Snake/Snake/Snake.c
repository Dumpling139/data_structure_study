#include"Snake.h"

void SetPos(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //��þ��
	COORD pos = { x,y };
	SetConsoleCursorPosition(handle, pos);//����Ĺ������
}

//��ӭ����
void Welcome()
{
	//��ӡ��ʼ��Ϸ�ĵ�һҳ
	SetPos(50, 5);
	printf("��ӭ����̰����С��Ϸ");
	SetPos(50, 25);
	system("pause");
	//��ӡ�ڶ�ҳ
  	system("cls");
	SetPos(45, 10);
	printf("ʹ�á�.��.��.���������ߵķ���");
	SetPos(50, 11);
	printf("F3Ϊ���٣�F4Ϊ����");
	SetPos(49, 12);
	printf("������ȡ�ø��ߵķ���");
	SetPos(50, 25);
	system("pause");
	system("cls");
}
//��ӡ��ͼ
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
	printf("�÷֣�");
	SetPos(70, 10);
	printf("ÿ��ʳ��÷֣�");
	SetPos(60, 14);
	printf("���ܴ�ǽ������ҧ���Լ�");
	SetPos(60, 15);
	printf("�á�.��.��.�������ߵ��ƶ�.");
	SetPos(60, 16);
	printf("F3Ϊ���٣�F4Ϊ����.");
	SetPos(60, 17);
	printf("ESC���˳���Ϸ.SPACE����ͣ��Ϸ");

}
//��ʼ��̰����
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
//��ӡ��Ϸ����
void PrintData(Snake* snake)
{
	assert(snake);
	SetPos(66, 10);
	printf("%02d", snake->num);
	SetPos(84, 10);
	printf("%02d", snake->score);
}
//��Ϸ��ʼ
void GameStart()
{
	setlocale(LC_ALL, "");//�޸�Ϊ���ػ���
	system("mode con cols=120 lines=30");//��������̨��С
	system("title ̰����");//������Ϸ��
	//���ع��
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//��þ��
	CONSOLE_CURSOR_INFO cursor_info = { 0 };//���
	GetConsoleCursorInfo(handle, &cursor_info);//�õ�����̨���
	cursor_info.bVisible = false;
	SetConsoleCursorInfo(handle, &cursor_info);//�������̨���
	//��ӭ����
	Welcome();
	//��ӡ��ͼ
	PrintMap();
}
//�жϷ���
void CheckDir(Snake* psnake)
{
	//���ܷ�����
	if (psnake->Dir == left && KEY_PRESS(VK_RIGHT) ||
		psnake->Dir == up && KEY_PRESS(VK_DOWN) ||
		psnake->Dir == right && KEY_PRESS(VK_LEFT) ||
		psnake->Dir == down && KEY_PRESS(VK_UP))
	{
		return;
	}
	if (KEY_PRESS(VK_LEFT))//���ͷ
	{
		psnake->Dir = left;
	}
	else if (KEY_PRESS(VK_UP))//�ϼ�ͷ
	{
		psnake->Dir = up;
	}
	else if (KEY_PRESS(VK_RIGHT))//�Ҽ�ͷ
	{
		psnake->Dir = right;
	}
	else if (KEY_PRESS(VK_DOWN))//�¼�ͷ
	{
		psnake->Dir = down;
	}
}
//����ʳ��
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
//�жϼ��ټ���
void CheckSpeed(Snake* psnake)
{
	if (KEY_PRESS(VK_F3)&&psnake->sleeptime>100)//����
	{
		psnake->sleeptime -= 100;
		psnake->score += 10;
		PrintData(psnake);
	}
	else if(KEY_PRESS(VK_F4) &&psnake->sleeptime<1000)//����
	{
		psnake->sleeptime += 100;
		psnake->score -= 10;
		PrintData(psnake);
	}
}
//�ж���Ϸ״̬
void CheckState(Snake* psnake)
{
	if (KEY_PRESS(VK_SPACE))//�ж��Ƿ���ͣ
	{
		psnake->Gs = stop;
		SnakeStop(psnake);
	}
	else if (KEY_PRESS(VK_ESCAPE))
	{
		psnake->Gs = esc;
		system("cls");
		SetPos(50, 15);
		printf("���˳�����Ϸ������");
	}
	else if (CheckKW(psnake))//
	{
		psnake->Gs = kill_bywall;
		system("cls");
		SetPos(50, 15);
		printf("ײ��ǽ�ˣ���Ϸ������");
	}
	else if (CheckKS(psnake))
	{
		psnake->Gs = kill_byself;
		system("cls");
		SetPos(50, 15);
		printf("�Ե��Լ��ˣ���Ϸ������");
	}
}
//�鿴�Ƿ�ǽɱ��
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
//�鿴�Ƿ��Լ�ɱ��
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
//��һ��
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
	if (cur->x == psnake->Food->x && cur->y == psnake->Food->y)//�����ʳ��
	{
		EatFood(psnake,cur);
	}
	else//���ûʳ��
	{
		NotEatFood(psnake,cur);
	}
}
//�Ե�ʳ��
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
//û�Ե�ʳ��
void NotEatFood(Snake* psnake,SnakeNode* cur)//����������
{
	//ͷ��cur
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
//��ͣ
void SnakeStop(Snake* psnake)
{
	SetPos(60, 5);
	printf("��Ϸ����ͣ");
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
//��Ϸ������
void GameRun()
{
	Snake* psnake = InitSnake();
	while (psnake->Gs == work)
	{
		//˯��һ��
		Sleep(psnake->sleeptime);
		//��һ��
		SnakeRun(psnake);
		//�жϷ���
		CheckDir(psnake);
		//�жϼ��ټ���
		CheckSpeed(psnake);
		//�ж���Ϸ״̬
		CheckState(psnake);
	}
}

