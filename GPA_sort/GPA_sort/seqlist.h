#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>


//数据类型
#define NAME_MAX 8

typedef struct StuNode {
	char name[NAME_MAX];
	float GPA;
}SLTYPE;

typedef struct Seqlist
{
	SLTYPE* sqlist;
	int size;//有效数据个数
	int capacity;//空间容量
}SL;
//变量的初始化
SL* SLCreate();

//变量的销毁
void SLDestroy(SL* sl);

//打印顺序表
void SLPrint(SL* sl);

void SLPush(SL* sl);