#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int Judger(char a[])
{
	int head = 0;
	int last = strlen(a) - 1;
	while (last > head)
	{
		if (a[head] != a[last])
		{
			return 0;
		}
		head++;
		last--;
	}
	return 1;
}
int main()
{
	char a[100] = { 0 };
	scanf("%s", a);
	if (Judger(a))
	{
		printf("%s", a);
	}
	else
	{
		printf("No!");
	}
	return 0;
}