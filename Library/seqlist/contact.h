#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdbool.h>
#define NAME_MAX 100
#define NUM_MAX 20
//�鼮����������
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
	int size;//��Ч���ݸ���
	int capacity;//�ռ�����
}SL;
//ǰ������
struct Seqlist;
typedef struct Seqlist LIB;

//��ʼ��
void LIBInit(LIB* lib);
//����
void LIBDestroy(LIB* lib);
//�鿴
void LIBCheck(LIB* ct);
//����
void LIBAdd(LIB* lib);
//ɾ��
void LIBDel(LIB* ct);
//����
void LIBFind(LIB* ct);
//�޸�
void LIBVice(LIB* ct);
//�޸ļ۸�
void LIBVicePrice(LIB* lib);
//�����
void LIBTOP1(LIB* lib);
//�����鼮
void BookInsert(LIB* lib);
//ȥ�������鼮
void LIBAdd2(LIB* lib);
//�������Ƿ����
bool IsEqu(SLTYPE* a, SLTYPE* b);