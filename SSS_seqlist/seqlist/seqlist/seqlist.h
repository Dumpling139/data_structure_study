#include"contact.h"

typedef PersonInfo SLTYPE;

typedef struct Seqlist
{
	SLTYPE* sqlist;
	int size;//有效数据个数
	int capacity;//空间容量
}SL;
//变量的初始化
void SLInit(SL* sl);

//变量的销毁
void SLDestroy(SL* sl);

//打印顺序表
void SLPrint(SL* sl);

//插入数据
//1.头插
void SLPushHead(SL* sl, SLTYPE data);
//2.尾插
void SLPushBack(SL* sl, SLTYPE data);
//3.中间插
void SLInsert(SL* sl, SLTYPE data, int pos);

//删除数据
//1.头删
void SLPopHead(SL* sl);
//2.尾删
void SLPopBack(SL* sl);
//中间删
void SLErase(SL* sl,int pos);
//查找数据
int SLFind(SL* sl, SLTYPE data);