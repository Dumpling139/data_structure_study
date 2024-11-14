#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next; //ָ�뱣����һ���ڵ�ĵ�ַ
	struct ListNode* prev; //ָ�뱣��ǰһ���ڵ�ĵ�ַ
	LTDataType data;
}LTNode;

//��ʼ������
LTNode* LTInit();
//��������
void LTDestroy(LTNode* phead);
//�鿴����
void LTPrint(LTNode* phead);
//ͷ��/ɾ��β��/ɾ
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);
void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);
//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x);
//ɾ��pos����
void LTErase(LTNode* pos);
//��������
LTNode* LTFind(LTNode* phead, LTDataType x);

