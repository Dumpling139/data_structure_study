#include"StackList.h"
bool StackEmpty(StackNode* ST)
{
	return ST->top == 0;
}
StackNode* CreateStack()
{
	StackNode* ST = (StackNode*)malloc(sizeof(StackNode));
	if (ST == NULL)
	{
		perror("malloc error");
		return NULL;
	}
	ST->capacity = 0;
	ST->top = 0;
	ST->val = NULL;
	return ST;
}
void DestoryStack(StackNode* ST)
{
	assert(ST);
	free(ST->val);
	ST->val = NULL;
	ST->top = ST->capacity = 0;
}
//
int StackPop(StackNode* ST)
{
	assert(!StackEmpty(ST));
	int tmp = ST->val[ST->top - 1];
	ST->top--;
	return tmp;
}
void StackPush(StackNode* ST, StackType tmp)
{
	if (ST->capacity == ST->top)
	{
		int newcapacity = ST->capacity == 0 ? 4 : 2 * ST->capacity * sizeof(StackType);
		StackType* cur = (StackType*)realloc(ST->val, newcapacity*sizeof(StackType));
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

