#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<malloc.h>


#define StackType char
#define StackType2 float


typedef struct StackNode1 {
	StackType* val;
	int top;
	int capacity;
}CharNode;

typedef struct StackNode2 {
	StackType2* val;
	int top;
	int capacity;
}FloatNode;



void InitStack(CharNode* ST);
void DestoryStack(CharNode* ST);
void StackPop(CharNode* ST);
void StackPush(CharNode* ST, StackType tmp);
StackType StackTop(CharNode* ST);
int StackSize(CharNode* ST);
bool StackEmpty(CharNode* ST);


void InitStack2(FloatNode* ST);
void DestoryStack2(FloatNode* ST);
void StackPop2(FloatNode* ST);
void StackPush2(FloatNode* ST, StackType2 tmp);
StackType2 StackTop2(FloatNode* ST);
int StackSize2(FloatNode* ST);
bool StackEmpty2(FloatNode* ST);
