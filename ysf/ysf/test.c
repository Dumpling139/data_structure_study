#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int ysf(int num, int tmp, int a)
{
	if (a == 1)
	{
		return (tmp - 1) % num;
	}
	else
	{
		return (ysf(num - 1, tmp, a - 1) + tmp) % num;
	}
}

int findysf(int num, int tmp)
{
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 1; i <= num - 1; i++)
	{
		sum1 += ysf(num, tmp, i);
	}
	for (int j = 0; j < num; j++)
	{
		sum2 += j;
	}
	return sum2 - sum1 + 1;
}

int main()
{
	printf("%d", findysf(20, 3));
	return 0;
}
