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


//��ʼ��
StackNode* CreateStack();
//����
void DestoryStack(StackNode* ST);
//��ջ
int StackPop(StackNode* ST);
//��ջ
void StackPush(StackNode* ST, StackType tmp);
//�鿴ջͷ
StackType StackTop(StackNode* ST);
//�鿴ջ�ĳ���
int StackSize(StackNode* ST);
//�鿴ջ�Ƿ��
bool StackEmpty(StackNode* ST);
