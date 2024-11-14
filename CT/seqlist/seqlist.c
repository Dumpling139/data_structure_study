
#include"seqlist.h"
//变量的初始化
void SLInit(SL* sl)
{
	sl->size = 0;
	sl->capacity = 0;
	sl->sqlist = NULL;
}
//变量的销毁
void SLDestroy(SL* sl)
{
	free(sl->sqlist);
	sl->sqlist = NULL;
	sl->size =sl->capacity = 0;
}
//打印顺序表
//void SLPrint(SL* sl)
//{
//	for (int i = 0; i < sl->size; i++)
//	{
//		printf("%d ", *(sl->sqlist+i));
//	}
//	printf("\n");
//}
//插入数据
//1.头插
//2.尾插
void SLPushBack(SL* sl, SLTYPE data)
{
	if (sl->size == sl->capacity)
	{
		int newcapacity = sl->capacity == 0 ? 4 : 2 * sl->capacity;
		SLTYPE* tmp = (SLTYPE*)realloc(sl->sqlist, newcapacity * sizeof(SLTYPE));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		sl->sqlist = tmp;
	}
	for (int i = sl->size; i > 0 ; i--)
	{
		*(sl->sqlist + i) = *(sl->sqlist + i - 1);
	}
	sl->sqlist[0] = data;
	sl->size++;
}
//中间插
void SLInsert(SL* sl, SLTYPE data, int pos)
{
	if (sl->size == sl->capacity)
	{
		int newcapacity = sl->capacity == 0 ? 4 : 2 * sl->capacity;
		SLTYPE* tmp = (SLTYPE*)realloc(sl->sqlist, newcapacity * sizeof(SLTYPE));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		sl->sqlist = tmp;
	}
	for (int i = sl->size; i > pos; i--)
	{
		*(sl->sqlist + i) = *(sl->sqlist + i - 1);
	}
	sl->sqlist[pos] = data;
	sl->size++;
}

//删除数据
//1.头删
void SLPopHead(SL* sl)
{
	sl->size--;
}
//2.尾删
void SLPopBack(SL* sl)
{
	for (int i = 0; i < sl->size-1; i++)
	{
		sl->sqlist[i] = sl->sqlist[i + 1];
	}
	sl->size--;
}
//中间删
void SLErase(SL* sl,int pos)
{
	for (int i = pos ; i < sl->size-1; i++)
	{
		sl->sqlist[i] = sl->sqlist[i + 1];
	}
	sl->size--;
}
//查找数据
//int SLFind(SL* sl, SLTYPE data)
//{
//	for (int i = 0; i < sl->size; i++)
//	{
//		if (data == sl->sqlist[i].name)
//		{
//			return i;
//		}
//	}
//}