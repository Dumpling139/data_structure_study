#include"LTNode.h"
//�ڵ�Ĵ���
LTNode* LTBuyNode(int x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc error");
	}
	newnode->next = newnode->prev = newnode;
	newnode->data = x;
	return newnode;
}
//˫���������
LTNode* LTInit()
{
	LTNode* phead = LTBuyNode(-1);
	return phead;
}
//�鿴˫����
void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* tmp = phead->next;
	while (tmp != phead)
	{
		printf("%d->", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
//β��
void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	LTNode* pre = phead->prev;
	pre->next = newnode;
	newnode->prev = pre;
	phead->prev = newnode;
	newnode->next = phead;
}
//βɾ
void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* pre = phead->prev->prev;
	free(phead->prev);
	phead->prev = pre;
	pre->next = phead;
}
//ͷ��
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = LTBuyNode(x);
	LTNode* next = phead->next;
	phead->next = newnode;
	newnode->prev = phead;
	next->prev = newnode;
	newnode->next = next;
}
//ͷɾ
void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* del = phead->next;
	LTNode* next = del->next;
	phead->next = next;
	next->prev = phead;
	free(del);
	del = NULL;
}
//��posλ��֮���������
void LTInsert(LTNode* pos, LTDataType x)
{
	LTNode* next = pos->next;
	LTNode* newnode = LTBuyNode(x);
	pos->next = newnode;
	newnode->prev = pos;
	next->prev = newnode;
	newnode->next = next;
}
//ɾ��pos����
void LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* pre = pos->prev;
	LTNode* next = pos->next;
	pre->next = next;
	next->prev = pre;
	free(pos);
	pos = NULL;
}
//��������
LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* tmp = phead->next;
	while (tmp != phead)
	{
		if (tmp->data == x)
		{
			return tmp;
		}
		tmp = tmp->next;
	}
	return NULL;
}
//��������
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* tmp = phead->next;
	while (tmp != phead)
	{
		LTNode* pre = tmp->next;
		free(tmp);
		tmp = pre;
	}
	free(phead);
	tmp = NULL;
	phead = NULL;
}

