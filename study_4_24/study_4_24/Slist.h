#include<stdio.h>
typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data; //节点数据
	struct SListNode* next; //指针保存下?个节点的地址
}SLTNode;
//查看单链表
void SLTPrint(SLTNode* phead);
//头部插?删除/尾部插?删除
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//void SLTPushFront(SLTNode** pphead, SLTDataType x);
//void SLTPopBack(SLTNode** pphead);
//void SLTPopFront(SLTNode** pphead);
////查找
//SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
////在指定位置之前插?数据
//void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
////删除pos节点
//void SLTErase(SLTNode** pphead, SLTNode* pos);
////在指定位置之后插?数据
//void SLTInsertAfter(SLTNode* pos, SLTDataType x);
////删除pos之后的节点
//void SLTEraseAfter(SLTNode* pos);
////销毁链表
//void SListDesTroy(SLTNode** pphead);