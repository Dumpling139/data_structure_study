#include"Slist.h"
#include<stdlib.h>
//查找最后一个
SLTNode* SLTFindLast(SLTNode* phead)
{
	
	while (phead->next)
	{
		phead = phead->next;
	}
	return phead;
}
//查看单链表
void SLTPrint(SLTNode* phead)
{
	while (phead)
	{
		printf("%d->", phead->data);
	}
	printf("NULL\n");
}

//头部插?删除/尾部插?删除
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