#include"contact.h"

typedef PersonInfo SLTYPE;

typedef struct Seqlist
{
	SLTYPE* sqlist;
	int size;//��Ч���ݸ���
	int capacity;//�ռ�����
}SL;
//�����ĳ�ʼ��
void SLInit(SL* sl);

//����������
void SLDestroy(SL* sl);

//��ӡ˳���
void SLPrint(SL* sl);

//��������
//1.ͷ��
void SLPushHead(SL* sl, SLTYPE data);
//2.β��
void SLPushBack(SL* sl, SLTYPE data);
//3.�м��
void SLInsert(SL* sl, SLTYPE data, int pos);

//ɾ������
//1.ͷɾ
void SLPopHead(SL* sl);
//2.βɾ
void SLPopBack(SL* sl);
//�м�ɾ
void SLErase(SL* sl,int pos);
//��������
int SLFind(SL* sl, SLTYPE data);