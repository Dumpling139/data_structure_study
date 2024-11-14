#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<malloc.h>


#define StackType char

typedef struct StackNode {
	StackType* val;
	int top;
	int capacity;
}StackNode;



void InitStack(StackNode* ST);
void DestoryStack(StackNode* ST);
void StackPop(StackNode* ST);
void StackPush(StackNode* ST, StackType tmp);
StackType StackTop(StackNode* ST);
int StackSize(StackNode* ST);
bool StackEmpty(StackNode* ST);
