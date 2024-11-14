#include"StackList.h"
bool StackEmpty(CharNode* ST)
{
	return ST->top == 0;
}
void InitStack(CharNode* ST)
{
	assert(ST);
	ST->capacity = 0;
	ST->top = 0;
	ST->val = NULL;
}
void DestoryStack(CharNode* ST)
{
	free(ST->val);
	ST->val = NULL;
	ST->top = ST->capacity = 0;
}
//
void StackPop(CharNode* ST)
{
	assert(!StackEmpty(ST));
	ST->top--;
}
void StackPush(CharNode* ST, StackType tmp)
{
	if (ST->capacity == ST->top)
	{
		int newcapacity = ST->capacity == 0 ? 4 : 2 * ST->capacity * sizeof(StackType);
		StackType* cur = (StackType*)realloc(ST->val, newcapacity);
		if (!cur)
		{
			perror("realloc error");
			return;
		}
		ST->val = cur;
		ST->capacity = newcapacity;
	}
	ST->val[ST->top++] = tmp;
}
StackType StackTop(CharNode* ST)
{
	assert(ST);
	assert(!StackEmpty(ST));
	return ST->val[ST->top-1];
}
int StackSize(CharNode* ST)
{
	assert(ST);
	return ST->top;
}

bool StackEmpty2(FloatNode* ST)
{
	return ST->top == 0;
}
void InitStack2(FloatNode* ST)
{
	assert(ST);
	ST->capacity = 0;
	ST->top = 0;
	ST->val = NULL;
}
void DestoryStack2(FloatNode* ST)
{
	free(ST->val);
	ST->val = NULL;
	ST->top = ST->capacity = 0;
}
//
void StackPop2(FloatNode* ST)
{
	assert(!StackEmpty(ST));
	ST->top--;
}
void StackPush2(FloatNode* ST, StackType2 tmp)
{
	if (ST->capacity == ST->top)
	{
		int newcapacity = ST->capacity == 0 ? 4 : 2 * ST->capacity * sizeof(StackType2);
		StackType2* cur = (StackType2*)realloc(ST->val, newcapacity);
		if (!cur)
		{
			perror("realloc error");
			return;
		}
		ST->val = cur;
		ST->capacity = newcapacity;
	}
	ST->val[ST->top++] = tmp;
}
StackType2 StackTop2(FloatNode* ST)
{
	assert(ST);
	assert(!StackEmpty(ST));
	return ST->val[ST->top - 1];
}
int StackSize2(FloatNode* ST)
{
	assert(ST);
	return ST->top;
}

