#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//递归的方式实现杨辉三角
int Fac(int a)
{
	if (a < 0)
	{
		return 0;
	}
	if (a == 0)
		return 1;
	else
		return a * Fac(a - 1);
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