#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int find(int * arr, int x, int y, int k)
//{
//	int m = 0;
//	int n = y-1;
//	int num = 0;
//	while (n >= 0 && m < x)
//	{
//		num = *(arr + m * x + n);
//		if (num< k)
//		{
//			m++;
//		}
//		else if(num > k)
//		{
//			n--;
//		}
//		else
//		{
//			return 1;
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret = find(a, 3, 3, k);
//	if (ret)
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("找不到");
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int true = 0;
//	for (i = 1; i <= 4; i++)
//	{
//		if (i != 1)
//		{
//			true++;
//		}
//		if (i == 3)
//		{
//			true++;
//		}
//		if (i == 4)
//		{
//			true++;
//		}
//		else
//		{
//			true++;
//		}
//		if (true == 3)
//		{
//			printf("%c说了假话,ta是凶手。", 64 + i);
//		}
//	}
//	return 0;
//}


//int fac(int a)
//{
//	if (a == 0)
//	{
//		return 1;
//	}
//	int num = 1;
//	for (int i = 0; i < a; i++)
//	{
//		num *= a - i;
//	}
//	return num;
//}
//
//int com(int n, int m)
//{
//	if (m == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return fac(n) / (fac(m) * fac(n - m));
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	int num = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			num = com(i - 1, j - 1);
//			printf("%d ",num);
//		}
//		printf("\n");
//	}
//	return 0;
//}