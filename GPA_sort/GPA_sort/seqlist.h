#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>


//��������
#define NAME_MAX 8

typedef struct StuNode {
	char name[NAME_MAX];
	float GPA;
}SLTYPE;

typedef struct Seqlist
{
	SLTYPE* sqlist;
	int size;//��Ч���ݸ���
	int capacity;//�ռ�����
}SL;
//�����ĳ�ʼ��
SL* SLCreate();

//����������
void SLDestroy(SL* sl);

//��ӡ˳���
void SLPrint(SL* sl);

void SLPush(SL* sl);