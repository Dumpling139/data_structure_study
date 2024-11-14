#include<stdio.h>
#include<malloc.h>
#include<assert.h>
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next; //指针保存下一个节点的地址
	struct ListNode* prev; //指针保存前一个节点的地址
	LTDataType data;
}LTNode;

//初始化链表
LTNode* LTInit();
//销毁链表
void LTDestroy(LTNode* phead);
//查看链表
void LTPrint(LTNode* phead);
//头插/删，尾插/删
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);
void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);
//在pos位置之后插入数据
void LTInsert(LTNode* pos, LTDataType x);
//删除pos数据
void LTErase(LTNode* pos);
//查找数据
LTNode* LTFind(LTNode* phead, LTDataType x);

