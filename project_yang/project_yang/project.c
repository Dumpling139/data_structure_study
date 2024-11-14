#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//迭代的方式实现杨辉三角
int Fac(int a)
{
	if (a < 0)
	{
		return 0;
	}
	int sum = 1;
	for (int i = 1; i <= a; i++)
	{
		sum *= i;
	}
	return sum;
}

int Com(int a, int b)
{
	if (b > a)
	{
		return 0;
	}
	int x = Fac(a);
	int y = Fac(b);
	int z = Fac(a - b);
	return x / (y * z);
}

void Yang(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", Com(i, j));
		}
		printf("\n");
	}
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	Yang(a);
	return 0;
}
