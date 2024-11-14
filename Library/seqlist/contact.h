#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>
#define NAME_MAX 100
#define NUM_MAX 20
//书籍包含的类型
typedef struct
{
	char num[NUM_MAX];
	char name[NAME_MAX];
	float price;
}PersonInfo;
typedef PersonInfo SLTYPE;

typedef struct Seqlist
{
	SLTYPE* sqlist;
	int size;//有效数据个数
	int capacity;//空间容量
}SL;
//前置声明
struct Seqlist;
typedef struct Seqlist LIB;

//初始化
void LIBInit(LIB* lib);
//销毁
void LIBDestroy(LIB* lib);
//查看
void LIBCheck(LIB* ct);
//增加
void LIBAdd(LIB* lib);
//删除
void LIBDel(LIB* ct);
//查找
void LIBFind(LIB* ct);
//修改
void LIBVice(LIB* ct);
//修改价格
void LIBVicePrice(LIB* lib);
//最贵书
void LIBTOP1(LIB* lib);
//插入书籍
void BookInsert(LIB* lib);
//去重增加书籍
void LIBAdd2(LIB* lib);
//两本书是否相等
bool IsEqu(SLTYPE* a, SLTYPE* b);