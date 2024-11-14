#include<stdio.h>
#include"SList.h"

int main()
{
	SLTNode* pSL1 = NULL;
	SLTNode** ppSL1 = &pSL1;

	SLTPushBack(ppSL1, 1);
	SLTPushBack(ppSL1, 2);
	SLTPushBack(ppSL1, 3);
	SLTPushBack(ppSL1, 4);
	SLTPushFront(ppSL1, 100);
//	SLTPrint(pSL1);
	SLTPopFront(ppSL1);
	SLTPopBack(ppSL1);
//	SLTPrint(pSL1);
	SLTPushBack(ppSL1, 5);
//	SLTPrint(pSL1);
	SLTNode* tmp1 = SLTFind(pSL1, 5);
	SLTInsert(ppSL1, tmp1, 4);
//	SLTPrint(pSL1);
	SLTNode* tmp2 = SLTFind(pSL1, 3);
	SLTErase(ppSL1, tmp2);
	SLTPrint(pSL1);
	SLTNode* tmp3 = SLTFind(pSL1, 2);
	SLTInsertAfter(tmp3, 3);
	SLTPrint(pSL1);
	SListDesTroy(ppSL1);
	return 0;
}