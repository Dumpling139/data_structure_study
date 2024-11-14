#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<malloc.h>


#define StackType int

typedef struct StackNode {
	StackType* val;
	int top;
	int capacity;
}StackNode;


//初始化
StackNode* CreateStack();
//销毁
void DestoryStack(StackNode* ST);
//出栈
int StackPop(StackNode* ST);
//入栈
void StackPush(StackNode* ST, StackType tmp);
//查看栈头
StackType StackTop(StackNode* ST);
//查看栈的长度
int StackSize(StackNode* ST);
//查看栈是否空
bool StackEmpty(StackNode* ST);
