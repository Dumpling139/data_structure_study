#include"LTNode.h"
//节点的创建
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
//双链表的声明
LTNode* LTInit()
{
	LTNode* phead = LTBuyNode(-1);
	return phead;
}
//查看双链表
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
//尾插
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
//尾删
void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	LTNode* pre = phead->prev->prev;
	free(phead->prev);
	phead->prev = pre;
	pre->next = phead;
}
//头插
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
//头删
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
//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x)
{
	LTNode* next = pos->next;
	LTNode* newnode = LTBuyNode(x);
	pos->next = newnode;
	newnode->prev = pos;
	next->prev = newnode;
	newnode->next = next;
}
//删除pos数据
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
//查找数据
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
//销毁链表
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

