#include"StackList.h"

bool isValid(char* s) {
	StackNode ST;
	InitStack(&ST);
	while (*s)
	{
		if (*s == '{' || *s == '[' || *s == '(')
		{
			StackPush(&ST, *s);
		}
		else
		{
			if (StackEmpty(&ST))
			{
				DestoryStack(&ST);
				return false;
			}
			char cur = StackTop(&ST);
			StackPop(&ST);
			if (*s == '}' && cur != '{' ||
				*s == ']' && cur != '[' ||
				*s == ')' && cur != '(')
			{
				DestoryStack(&ST);
				return false;
			}
		}
		++s;
	}
	if (!StackEmpty(&ST))
	{
		DestoryStack(&ST);
		return false;
	}
	DestoryStack(&ST);
	return true;
}

int main()
{
	char* s = "({{{{}}}))";
	isValid(s);
	return 0;
}