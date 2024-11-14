#include"StackList.h"
bool StackEmpty(StackNode* ST)
{
	return ST->top == 0;
}
void InitStack(StackNode* ST)
{
	assert(ST);
	ST->capacity = 0;
	ST->top = 0;
	ST->val = NULL;
}
void DestoryStack(StackNode* ST)
{
	assert(ST);
	free(ST->val);
	ST->val = NULL;
	ST->top = ST->capacity = 0;
}
//
void StackPop(StackNode* ST)
{
	assert(!StackEmpty(ST));
	ST->top--;
}
void StackPush(StackNode* ST, StackType tmp)
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
StackType StackTop(StackNode* ST)
{
	assert(ST);
	assert(!StackEmpty(ST));
	return ST->val[ST->top-1];
}
int StackSize(StackNode* ST)
{
	assert(ST);
	return ST->top;
}

