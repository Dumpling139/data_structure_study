#include"Slist.h"
#include<stdlib.h>
//�������һ��
SLTNode* SLTFindLast(SLTNode* phead)
{
	
	while (phead->next)
	{
		phead = phead->next;
	}
	return phead;
}
//�鿴������
void SLTPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->data);
	}
	printf("NULL\n");
}

//ͷ����?ɾ��/β����?ɾ��
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	SLTNode* tmp = (SLTNode*)malloc(sizeof(SLTNode));
	if (!tmp)
	{
		perror("malloc error");
		exit(1);
	}
	SLTFindLast(*pphead)->next = tmp;
	tmp->data = x;
	tmp->next = NULL;
}