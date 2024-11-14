#include"Slist.h"
#include<stdlib.h>
//查找最后一个
SLTNode* SLTFindLast(SLTNode* phead)
{
	assert(phead);
	while (phead->next!=NULL)
	{
		phead = phead->next;
	}
	return phead;
}
//查找上一个
SLTNode* SLTPrevious(SLTNode* phead, SLTNode* x)
{
	assert(phead);
	while (phead->next != x)
	{
		phead = phead->next;
	}
	return phead;
}
//创建变量
SLTNode* SLTBuyNode(SLTDataType x)
{
	SLTNode* tmp = (SLTNode*)malloc(sizeof(SLTNode));
	if (!tmp)
	{
		perror("malloc error");
		exit(1);
	}
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
//查看单链表
void SLTPrint(SLTNode* phead)
{
	while (phead != NULL)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
}

//头部插入删除/尾部插入删除
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* tmp = SLTBuyNode(x);
	//如果链表为空
	if (*pphead == NULL)
	{
		*pphead = tmp;
	}
	else//如果链表不空
	{
		SLTFindLast(*pphead)->next = tmp;
	}
}

void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* newNode = SLTBuyNode(x);
	SLTNode* tmp = *pphead;
	*pphead = newNode;
	newNode->next = tmp;

}
void SLTPopFront(SLTNode** pphead)
{
	assert(pphead);
	//链表不能为空
	assert(*pphead);
	SLTNode* tmp = *pphead;
	*pphead = (*pphead)->next;
	free(tmp);
	tmp = NULL;
}
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	//链表不能为空
	assert(*pphead);
	SLTNode* Last = SLTFindLast(*pphead);
	SLTNode* Previous = SLTPrevious(*pphead, Last);
	Previous->next = NULL;
	free(Last);

}
//查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	assert(phead);
	while (phead != NULL)
	{
		if (phead->data == x)
		{
			return phead;
		}
		phead = phead->next;
	}
	return NULL;
}
//在指定位置之前插入数据
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* Prepos = SLTPrevious(*pphead, pos);
	SLTNode* newnode = SLTBuyNode(x);
	Prepos->next = newnode;
	newnode->next = pos;

}
//删除pos节点
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	SLTNode* Prepos = SLTPrevious(*pphead, pos);
	Prepos->next = Prepos->next->next;
	free(pos);
}
//在指定位置之后插入数据
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	SLTNode* tmp = pos->next;
	pos->next = newnode;
	newnode->next = tmp;
}
//删除pos之后的节点
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLTNode* tmp = pos->next;
	pos->next = pos->next->next;
	free(tmp);
}
//销毁链表
void SListDesTroy(SLTNode** pphead)
{
	assert(pphead);
	//assert(*pphead);
	while (*pphead != NULL)
	{
		SLTNode* tmp = *pphead;
		*pphead = (*pphead)->next;
		free(tmp);
	}
}
