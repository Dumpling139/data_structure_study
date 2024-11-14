#include"LTNode.h"

int main()
{
	LTNode* phead = LTInit();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 4);
	LTPrint(phead);
	LTPopBack(phead);
	LTPopBack(phead);
	LTPopBack(phead);
	LTPrint(phead);
	LTPushFront(phead, 2);
	LTPushFront(phead, 3);
	LTPushFront(phead, 4);
	LTPushFront(phead, 5);
	LTPrint(phead);
	LTPopFront(phead);
	LTPrint(phead);
	LTInsert(LTFind(phead, 3), 100);
	LTPrint(phead);
	LTErase(LTFind(phead, 100), phead);
	LTPrint(phead);
	return 0;
}