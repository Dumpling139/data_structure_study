#include"Slist.h"
#include<stdlib.h>
//�������һ��
SLTNode* SLTFindLast(SLTNode* phead)
{
	assert(phead);
	while (phead->next!=NULL)
	{
		phead = phead->next;
	}
	return phead;
}
//������һ��
SLTNode* SLTPrevious(SLTNode* phead, SLTNode* x)
{
	assert(phead);
	while (phead->next != x)
	{
		phead = phead->next;
	}
	return phead;
}
//��������
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
//�鿴������
void SLTPrint(SLTNode* phead)
{
	while (phead != NULL)
	{
		printf("%d->", phead->data);
		phead = phead->next;
	}
	printf("NULL\n");
}

//ͷ������ɾ��/β������ɾ��
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
	SLTNode* tmp = SLTBuyNode(x);
	//�������Ϊ��
	if (*pphead == NULL)
	{
		*pphead = tmp;
	}
	else//���������
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
	//������Ϊ��
	assert(*pphead);
	SLTNode* tmp = *pphead;
	*pphead = (*pphead)->next;
	free(tmp);
	tmp = NULL;
}
void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);
	//������Ϊ��
	assert(*pphead);
	SLTNode* Last = SLTFindLast(*pphead);
	SLTNode* Previous = SLTPrevious(*pphead, Last);
	Previous->next = NULL;
	free(Last);

}
//����
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
//��ָ��λ��֮ǰ��������
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(pphead);
	assert(*pphead);
	SLTNode* Prepos = SLTPrevious(*pphead, pos);
	SLTNode* newnode = SLTBuyNode(x);
	Prepos->next = newnode;
	newnode->next = pos;

}
//ɾ��pos�ڵ�
void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	SLTNode* Prepos = SLTPrevious(*pphead, pos);
	Prepos->next = Prepos->next->next;
	free(pos);
}
//��ָ��λ��֮���������
void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = SLTBuyNode(x);
	SLTNode* tmp = pos->next;
	pos->next = newnode;
	newnode->next = tmp;
}
//ɾ��pos֮��Ľڵ�
void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLTNode* tmp = pos->next;
	pos->next = pos->next->next;
	free(tmp);
}
//��������
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
